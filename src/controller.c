#include <stdio.h>
#include <stdlib.h>
#include <EFM8LB1.h>
#include "controller.h"
#include "util.c"
#include "oled.c"
#include "i2c.c"


// address for FUXB = 0x46 and 0x45
// address for current = 0xAA 0xAB

volatile unsigned int btn_state = 0;
volatile unsigned int btn_type = 0;
volatile unsigned int btn_press = 0;
volatile unsigned int btn_debug = 0;

char _c51_external_startup (void)
{
	// Disable Watchdog with key sequence
	SFRPAGE = 0x00;
	WDTCN = 0xDE; //First key
	WDTCN = 0xAD; //Second key
  
	VDM0CN=0x80;       // enable VDD monitor
	RSTSRC=0x02|0x04;  // Enable reset on missing clock detector and VDD

	#if (SYSCLK == 48000000L)	
		SFRPAGE = 0x10;
		PFE0CN  = 0x10; // SYSCLK < 50 MHz.
		SFRPAGE = 0x00;
	#elif (SYSCLK == 72000000L)
		SFRPAGE = 0x10;
		PFE0CN  = 0x20; // SYSCLK < 75 MHz.
		SFRPAGE = 0x00;
	#endif
	
	#if (SYSCLK == 12250000L)
		CLKSEL = 0x10;
		CLKSEL = 0x10;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 24500000L)
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 48000000L)	
		// Before setting clock to 48 MHz, must transition to 24.5 MHz first
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
		CLKSEL = 0x07;
		CLKSEL = 0x07;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 72000000L)
		// Before setting clock to 72 MHz, must transition to 24.5 MHz first
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
		CLKSEL = 0x03;
		CLKSEL = 0x03;
		while ((CLKSEL & 0x80) == 0)
	#else
		#error SYSCLK must be either 12250000L, 24500000L, 48000000L, or 72000000L
	#endif
	
	SFRPAGE = 0x00;
	P0MDOUT |= 0b1101_1101; // Enable UART0 TX as push-pull output
	P1MDOUT = 0b1000_0100;
	P2MDOUT = 0b0100_0001;
	PRTDRV = 0b0000_0100;
	SFRPAGE = 0x20;
	P3MDOUT = 0b0000_1111;
	SFRPAGE = 0x00;
	//PCON1 = 0b0000_0001; // DO NOT TURN ON. WILL MAKE CHIP BRAINDEAD
	
	//P0MDOUT |= 0b0100_0000; // Enable UART0 TX as push-pull output
	XBR0     = 0x07; // Enable UART0 on P0.4(TX) and P0.5(RX)      and smb0 and spi0               
	XBR1     = 0b0100_0000;
	XBR2     = 0x40; // Enable crossbar and weak pull-ups
	P0SKIP = 0b0000_1000; // Skip first pin and then use the last two for the SS
	P1MDIN &= 0b_1100_0011; // ADC pins
	P1SKIP |= 0b_0011_1000;

	// Configure Uart 0
	SCON0 = 0x10;
	CKCON0 |= 0b_0000_1000 ; // Timer 1 uses the system clock.
	TH1 = 0x100-((SYSCLK/BAUDRATE)/2L);
	TL1 = TH1;      // Init Timer1
	TMOD &= ~0xf0;  // TMOD: timer 1 in 8-bit auto-reload
	TMOD |=  0x20;                       
	TR1 = 1; // START Timer1
	TI = 1;  // Indicate TX0 ready
	
	// Configure SPI0
	SPI0CFG = 0b0100_0000; // not busy, master enable, first edge of clock, line in low idle
	SPI0CN0 = 0b0000_0001; // 3_wire mode and enable spi
	SPI0CKR =  (SYSCLK/(2*F_SCK_MAX))-1;; //48/(1*2)-1; // has to be between 0 and 255 
	
	// Configure I2C
	
		// Configure Timer 0 as the I2C clock source
	CKCON0 |= 0x04; // Timer0 clock source = SYSCLK
	TMOD &= 0xf0;  // Mask out timer 1 bits
	TMOD |= 0x02;  // Timer0 in 8-bit auto-reload mode
	// Timer 0 configured to overflow at 1/3 the rate defined by SMB_FREQUENCY
	TL0 = TH0 = (0x34 << TH1_TH1__SHIFT);
	TR0 = TCON_TR0__RUN; // Enable timer 0
	
	SMB0CF = 0b1101_0000;
	
	// Configure UART1
	
	SFRPAGE = 0x20;
	SMOD1 = 0x0C; 
	SCON1 = 0x10;
	SBCON1 =0x00;  
	SBRL1 = 0x10000L-((72000000/BAUDRATE)/(12L*2L));
	SCON1 |= 0x02;    
	SBCON1 |= 0x40;   
	SFRPAGE = 0x10; // Maybe change to 0x00;
	
	EA=1;				// Global Interrupts
	EIE2 = 0b0000_0100; // Timer 4 Interrupts
	LFO0CN = 0b1100_1100; // Enable the low frequency clock 
	SFRPAGE = 0x10;
	TMR4RLH= 0b1111_1101; // set the 16 bit timer high reload value
	TMR4RLL= 0b0000_1111; // set the 16 bit timer low reload value
	TMR4H= 0b1111_1101; // set the 16 bit timer high value
	TMR4L= 0b0000_1111; // set the 16 bit timer low value
	TMR4CN0 = 0b0000_0011; // Turn off timer for now. 
	SFRPAGE = 0x00;
	
	
	// Configure ADC

	return 0;
}

void SendByteSPI ()
{
	SFRPAGE = 0x00;
	OLED_SELECT = 0;
	SPI0DAT = 0xA5;
	while(!SPIF);
	SPIF = 0;
	Timer3us(5);
	OLED_SELECT = 1;
	return;
}


void senddata (char c) 
{
    SFRPAGE = 0x20;
	if (c == '\n') 
	{
		while (!(SCON1 & 0x02));
		SCON1 &= ~0x02;
		SBUF1 = '\r';
	}
	while (!(SCON1 & 0x02));
	SCON1 &= ~0x02;
	SBUF1 = c;
	SFRPAGE = 0x00;
}

char receivedata (void)
{
	char c;
    SFRPAGE = 0x20;
	while (!(SCON1 & 0x01));
	SCON1 &= ~0x01;
	SCON1&=0b_0011_1111;
	c = SBUF1;
	SFRPAGE = 0x00;
	return (c);
}

void low_power_sleep (){

//PCON1 = 0b1000_0000;

}


/////////////////////////////////////////////
// Core code for home button functionality //
/////////////////////////////////////////////
	
void btnpress() { // need to re-map pins to enable interrupts 
	if (btn_press == 0) {
		SFRPAGE = 0x10;
		TMR4CN0 = 0b0000_0111; // Timer 4 start
		SFRPAGE = 0x00;
		btn_press = 1;
	}
}

void stop_timer4 () {
	SFRPAGE = 0x10;
	TMR4CN0 = 0b0000_0011; //Stop the timer
	SFRPAGE = 0x00;
}

void timer4_ISR (void) interrupt INTERRUPT_TIMER4 // Interrupt Service Routine for timer 4
{ 
	SFRPAGE = 0x10;
	TMR4CN0 = 0b0000_0111; //Reset the interrupt
	SFRPAGE = 0x00;

	if (BOOT == 0 && btn_state == 0){
		btn_state = 1;
	}

	// Hold click pre-state
	else if (BOOT == 0 && btn_state == 1){ // if high 
		btn_state = 3;
	}

	// Double click or single click pre-state
	else if (BOOT == 1 && btn_state == 1){
		btn_state = 2;
	}

	// Hold click
	else if (BOOT == 0 && btn_state == 3){ // if high 
		btn_debug = 1;
		btn_state = 0;
		stop_timer4 ();
		low_power_sleep ();
	}

	// Single click
	else if (BOOT == 1 && btn_state == 2){ // if low 
		btn_debug = 2;
		btn_state = 0;
		stop_timer4 ();
	}

	// Double click
	else if (BOOT == 0 && btn_state == 2){ // if high 
		btn_debug = 3;
		btn_state = 0;
		stop_timer4 ();
		printf("Double click!\n");
	}

}

/////////////////////////////////
// Core code for main function //
/////////////////////////////////

void main (void)
{
	// Clear all pin states and reset
	STATUS1 = 1;
	NOTIF = 0;
	BLE_PWR = 1;
	ENABLE = 1;
	
	// Test Battery Level
	
	// Turn on LED to indicate that the controller is on
	
	
	// Vibrate motor to give feedback
	NOTIF = 1;
	// waitms(20);
	NOTIF = 0;
	
	// Wake the board
	
	// Turn on magnetoresistor sensor
	ENABLE = 0;

	
	// Display Init sequence
	init_oled();
	clear_oled();
	draw_oled(0, 0, 64, 124, settings);

	CHARGE_EN = 0;
	
	while(1)
	{
		if (DEADMAN == 0){ // if the deadmans trigger is pressed down then send data
			clear_oled();
			printf("%i", btn_debug);
		}
		
		if (BOOT == 0){ btnpress(); } 					// Core code for home button functionality
		else { if (btn_state != 2){ btn_press = 0; } }	// keep these two lines together. 
		
	}
}	
