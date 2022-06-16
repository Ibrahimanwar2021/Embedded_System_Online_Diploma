/*
 * main.c
 *
 *  Created on: Jun 4, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{
	float number1 ,number2 ,temp;

	printf("Enter value of a: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&number1);
	printf("Enter value of b: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&number2);

	temp = number1;
	number1 = number2;
	number2 = temp;
	printf("After swapping, value of a = %f\n",number1);
	printf("After swapping, value of b = %f",number2);

}
