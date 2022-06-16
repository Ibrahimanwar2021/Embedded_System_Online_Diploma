/*
 * main.c
 *
 *  Created on: Jun 4, 2022
 *      Author: ibrah
 */


# include "stdio.h"

int main ()
{
	char character;
	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&character);
	printf("ASCII value of %c: %d",character,character);
}
