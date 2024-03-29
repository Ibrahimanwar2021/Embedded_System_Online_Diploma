/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


#include <stdio.h>

#define Set(Register_name,bit_no)          Register_name|=(1<<bit_no)    //to set bit
#define Reset(Register_name,bit_no)        Register_name&=~(1<<bit_no)   //to reset bit
#define Toggle(Register_name,bit_no)       Register_name^=(1<<bit_no)       //to set bit

typedef volatile unsigned int vuint32_t ;
#define _delay         for( vuint32_t i = 0 ; i<5000 ; i++ )

//RCC reset and clock control Peripheral Base Address
#define RCC            0x40021000
#define RCC_APB2ENR    *( vuint32_t *)( RCC + 0x18 )   //APB2 peripheral Clock Enable Register

//GPIO General Purpose Input Output Peripheral
#define GPIOA          0x40010800
#define GPIOA_CRL      *( vuint32_t *)( GPIOA + 0x00 )   //Port Configuration Register Low
#define GPIOA_CRH      *( vuint32_t *)( GPIOA + 0x04 )   //Port Configuration Register High
#define GPIOA_IDR      *( vuint32_t *)( GPIOA + 0x08 )   //Port Intput Data Register
#define GPIOA_ODR      *( vuint32_t *)( GPIOA + 0x0C )   //Port Output Data Register

#define GPIOB          0x40010C00
#define GPIOB_CRL      *( vuint32_t *)( GPIOB + 0x00 )   //Port Configuration Register Low
#define GPIOB_CRH      *( vuint32_t *)( GPIOB + 0x04 )   //Port Configuration Register High
#define GPIOB_IDR      *( vuint32_t *)( GPIOA + 0x08 )   //Port Intput Data Register
#define GPIOB_ODR      *( vuint32_t *)( GPIOB + 0x0C )   //Port Output Data Register





void Init_Clocks()
{
	Set(RCC_APB2ENR,2);    //Enable GPIOA Clock
	Set(RCC_APB2ENR,3);    //Enable GPIOAB Clock
}

void Init_GPIO()
{
	GPIOA_ODR = 0;

	//Port configuration register
	//MODE1 Pin Mode
	Set(GPIOB_CRL,4);          //Set Port B pin1 as output mode at 10 MHZ
	Reset(GPIOB_CRL,5);
	//CNF1 Pin Mode
	Reset(GPIOB_CRL,6);        //set push-pull mode
	Reset(GPIOB_CRL,7);

	//MODE13 Pin Mode
	Set(GPIOB_CRH,20);         //Set Port B pin13 as output mode at 10 MHZ
	Reset(GPIOB_CRH,21);
	//CNF13 Pin Mode
	Reset(GPIOB_CRH,22);       //set push-pull mode
	Reset(GPIOB_CRH,23);

	//MODE1 Pin Mode
	Reset(GPIOA_CRL,4);        //Set Port A pin1 as input mode
	Reset(GPIOA_CRL,5);
	//CNF1 Pin Mode
	Set(GPIOA_CRL,6);          //set Floating input mode
	Reset(GPIOA_CRL,7);

	//MODE13 Pin Mode
	Reset(GPIOA_CRH,20);       //Set Port A pin1 as input mode
	Reset(GPIOA_CRH,21);
	//CNF13 Pin Mode
	Set(GPIOA_CRH,22);         //set Floating input mode
	Reset(GPIOA_CRH,23);

	Set(GPIOB_ODR,1);
	Set(GPIOB_ODR,13);
}

int main()
{
	Init_Clocks();
	Init_GPIO();

	while(1)
	{
		if ( (GPIOA_IDR & (1<<1)) != (1<<1) )
		{
			Toggle(GPIOB_ODR,1);
			_delay;
			while( (GPIOA_IDR & (1<<1)) != (1<<1) );   //Single Pressing
		}
		if ( (GPIOA_IDR & (1<<13)) == (1<<13) )         //multi pressing
			Toggle(GPIOB_ODR,13);
		_delay;
	}
}

