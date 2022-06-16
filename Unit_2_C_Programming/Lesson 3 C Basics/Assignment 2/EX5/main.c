/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{

    	char c;

		printf("Enter a character: ");
		fflush(stdout); fflush(stdin);
		scanf("%c",&c);

		if ((c>=65 && c<=90) || (c>=97 && c<=122))
		printf("%c is an alphabet",c);

		else
		printf("%c is not an alphabet",c);


}
