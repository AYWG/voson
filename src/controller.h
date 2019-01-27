#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#define SYSCLK 24500000L
#define BAUDRATE 115200L

#define TH1_TH1__SHIFT 0x00 ///< Timer 1 High Byte
#define TL1_TL1__SHIFT 0x00 ///< Timer 1 Low Byte
#define TCON_TR0__RUN 0x10  ///< Start Timer 0 running.

#define F_SCK_MAX 2000000L // Max SCK freq (Hz)
#define BLE_FREQ 112500L

#define ENABLE P1_2
#define CHARGE_EN P1_6
#define UNITC P1_7
#define NOTIF P2_0
#define DEADMAN P2_1
#define BOOT P2_2
#define LOWBAT P2_5
#define BLE_PWR P2_6
#define DISPLAY_LED1 P3_2
#define STATUS1 P3_3
#define OLED_SELECT P0_3
#define OLED_A0 P3_0
#define OLED_RESET P3_1

#endif