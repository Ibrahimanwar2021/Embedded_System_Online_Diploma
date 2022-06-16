/*
 * main.c
 *
 *  Created on: Jun 3, 2022
 *      Author: ibrah
 */

#include "stdio.h"

int main ()
{
	int number;
	printf("Enter an integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);
	printf("You entered: %d",number);
}

