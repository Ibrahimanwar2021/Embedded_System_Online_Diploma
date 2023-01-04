/*
 * keypad.h
 *
 *  Created on: Jan 4, 2023
 *      Author: ibrah
 */

#ifndef HAL_KEYPAD_KEYPAD_H_
#define HAL_KEYPAD_KEYPAD_H_

//#define F_CPU 8000000UL
#include "stm32f103x6.h"
#include "GPIO.h"
#define R0 GPIO_PIN_0
#define R1 GPIO_PIN_1
#define R2 GPIO_PIN_3
#define R3 GPIO_PIN_4
#define C0 GPIO_PIN_5
#define C1 GPIO_PIN_6
#define C2 GPIO_PIN_7
#define C3 GPIO_PIN_8

#define KEYPAD_PORT GPIOB
GPIO_PinConfig_t pinconfig ;

void Keypad_init();
char Keypad_getkey();

#endif /* HAL_KEYPAD_KEYPAD_H_ */
