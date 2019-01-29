#include <stdio.h>
#include <stdlib.h>
#include <EFM8LB1.h>
#include "controller.h"
#include "util.c"
#include "oled.c"
#include "i2c.c"
#include "init.c"
volatile unsigned int menu_state = 0;


// address for FUXB = 0x46 and 0x45
// address for current = 0xAA 0xAB

volatile unsigned int btn_state = 0;
volatile unsigned int btn_type = 0;
volatile unsigned int btn_press = 0;
volatile unsigned int btn_debug = 0;

void SendByteSPI()
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

void senddata(char c) 
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

char receivedata(void)
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

void low_power_sleep(){

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

void stop_timer4() {
	SFRPAGE = 0x10;
	TMR4CN0 = 0b0000_0011; //Stop the timer
	SFRPAGE = 0x00;
}

void timer4_ISR(void) interrupt INTERRUPT_TIMER4 // Interrupt Service Routine for timer 4
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
		menu_state = menu_state == 2 ? 0 : menu_state + 1;
		update_menu(menu_state);
	}

}


/////////////////////////////////
// Core code for main function //
/////////////////////////////////

void main(void)
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
	oled_init();
	oled_clear();
	// update_menu(menu_state);

	CHARGE_EN = 0;
	
	while(1)
	{
		if (DEADMAN == 0){ // if the deadmans trigger is pressed down then send data
			oled_clear();
			printf("%u\n", sizeof Open_Sans_Regular_45);
			// printf("%i", btn_debug);
		}

		if (BOOT == 0){ btnpress(); } 					// Core code for home button functionality
		else { if (btn_state != 2){ btn_press = 0; } }	// keep these two lines together. 
		
	}
}	
