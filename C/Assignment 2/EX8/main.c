/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{
	    char operand;
		float number1,number2;

		printf("Enter operator either + or - or * or divide : ");
		fflush(stdout); fflush(stdin);
		scanf("%c",&operand);


		printf("Enter two operands: ");
		fflush(stdout); fflush(stdin);
		scanf("%f%f",&number1,&number2);

		switch(operand){
			case '+':
			{printf("%f + %f = %f",number1,number2,number1+number2);
			}break;
			case '-':
			{printf("%f - %f = %f",number1,number2,number1-number2);
			}break;
			case '*':
			{printf("%f * %f = %f",number1,number2,number1*number2);
			}break;
			case '/':
			{printf("%f / %f = %f",number1,number2,number1/number2);
			}break;
		}
}


