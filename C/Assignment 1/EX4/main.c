/*
 * main.c
 *
 *  Created on: Jun 4, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{
	float num1 ,num2;
	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f\n%f",&num1,&num2);
	printf("Product: %f",num1*num2);
}
