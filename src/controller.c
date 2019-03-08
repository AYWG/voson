
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <EFM8LB1.h>
#include "font.h"
#include "controller.h"

// NOTE: THIS WAS ONLY DONE BECAUSE A LINKER WAS NOT AVAILABLE AT THE TIME OF DEVELOPMENT.
#include "fonts.c"
#include "images.c"
#include "util.c"
#include "oled.c"
#include "common.c"
#include "settings.c"
#include "main.c"
#include "menu.c"
#include "i2c.c"
#include "magneto.c"
#include "init.c"

// address for FUXB = 0x46 and 0x45
// address for current = 0xAA 0xAB

// volatile unsigned int btn_state = 0;
// volatile unsigned int btn_type = 0;
// volatile unsigned int btn_press = 0;
// volatile unsigned int btn_debug = 0;

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
	
// void btnpress() { // need to re-map pins to enable interrupts 
// 	if (btn_press == 0) {
// 		SFRPAGE = 0x10;
// 		TMR4CN0 = 0b0000_0111; // Timer 4 start
// 		SFRPAGE = 0x00;
// 		btn_press = 1;
// 	}
// }

// void stop_timer4() {
// 	SFRPAGE = 0x10;
// 	TMR4CN0 = 0b0000_0011; //Stop the timer
// 	SFRPAGE = 0x00;
// }

// void timer4_ISR(void) interrupt INTERRUPT_TIMER4 // Interrupt Service Routine for timer 4
// { 
// 	SFRPAGE = 0x10;
// 	TMR4CN0 = 0b0000_0111; //Reset the interrupt
// 	SFRPAGE = 0x00;

// 	if (BOOT == 0 && btn_state == 0){
// 		btn_state = 1;
// 	}

// 	// Hold click pre-state
// 	else if (BOOT == 0 && btn_state == 1){ // if high 
// 		btn_state = 3;
// 	}

// 	// Double click or single click pre-state
// 	else if (BOOT == 1 && btn_state == 1){
// 		btn_state = 2;
// 	}

// 	// Hold click
// 	else if (BOOT == 0 && btn_state == 3){ // if high 
// 		btn_debug = 1;
// 		btn_state = 0;
// 		stop_timer4 ();
// 		low_power_sleep ();
// 	}

// 	// Single click
// 	else if (BOOT == 1 && btn_state == 2){ // if low 
// 		btn_debug = 2;
// 		btn_state = 0;
// 		stop_timer4 ();
// 		setting_select_switch();
// 	}

// 	// Double click
// 	else if (BOOT == 0 && btn_state == 2){ // if high 
// 		btn_debug = 3;
// 		btn_state = 0;
// 		stop_timer4 ();
// 		menu_switch();
// 	}

// }

void singleclick(void)
{
	if (menu_state == SETTINGS_MENU) {
		setting_select_switch();
	}
}

void doubleclick(void)
{
	menu_switch();
}

void longclick(void)
{
}

void pb_event(void)
{
	int i = 0;

	//check if there is a long press
	while (BOOT == 0)
	{
		if (i >= HOLD_TIME)
		{
			longclick();
			waitms(DEBOUNCE * 100); //to avoid command overlap
			return;					//button event is a long press
		}
		waitms(DEBOUNCE);
		i++;
	}

	//check if there is a double click
	for (i = DC_GAP; i != 0; i--)
	{
		if (BOOT == 0)
		{
			doubleclick();
			return; //button event is a double click
		}
		waitms(DEBOUNCE);
	}

	singleclick(); //otherwise button event is a single click
	return;
}

void deadman_event(void)
{
	if (menu_state == SETTINGS_MENU) {
		settings_toggle();
	}
}

/////////////////////////////////
// Core code for main function //
/////////////////////////////////

void main(void)
{
	unsigned char speed = 0;
	unsigned char i = 0;
	// Clear all pin states and reset
	STATUS1 = 1;
	NOTIF = 0;
	BLE_PWR = 1;
	ENABLE = 1;
	BOOT = 1;
	
	// Test Battery Level
	
	// Turn on LED to indicate that the controller is on
	
	// Vibrate motor to give feedback
	NOTIF = 1;
	waitms(20);
	NOTIF = 0;
	
	// Turn on magnetoresistor sensor
	magneto_enable();

	oled_init();
	oled_clear();
	menu_init();
	main_init();
	settings_init();
	menu_draw();

	CHARGE_EN = 0;
	printf("%f");

	while(1)
	{
		waitms(100);
		if (BOOT == 0) {
			pb_event();
			waitms(100);
		}

		if (DEADMAN == 0) {
			deadman_event();

			// printf("speed: %d\n", get_speed());
			get_angle();
			// printf("angle %f\n", get_angle());
			// get_speed();
			// printf("%d\n", get_speed());

		}
		i++;
		if (i % 10 == 0) {
			speed++;
			if (speed == 100) speed = 0;
			if (menu_state == MAIN_MENU) {
				main_update_speed(speed);
			}
		}

		// if (BOOT == 0){ btnpress(); } 					// Core code for home button functionality
		// else { if (btn_state != 2){ btn_press = 0; } }	// keep these two lines together. 
	}
}	
