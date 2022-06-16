/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{

	float number1,number2,number3;

		printf("Enter three numbers: ");
		fflush(stdout); fflush(stdin);
		scanf("%f%f%f",&number1,&number2,&number3);

		if (number1>number2){
			if (number3>number1)
				printf("Largest number = %f",number3);
			else
				printf("Largest number = %f",number1); }
		else {
			if (number3>number2)
				printf("Largest number = %f",number3);
			else
				printf("Largest number = %f",number2);}
}

