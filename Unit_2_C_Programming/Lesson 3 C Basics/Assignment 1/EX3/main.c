/*
 * main.c
 *
 *  Created on: Jun 4, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{
	int num1 ,num2;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d\n%d",&num1,&num2);
	printf("Sum: %d",num1+num2);
}
