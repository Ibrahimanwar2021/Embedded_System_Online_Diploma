/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{

    	float number;

		printf("Enter a number: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&number);

		if (number == 0)
			printf("You entered zero");
		else if (number>0)
			printf("%f is positive",number);
		else
			printf("%f is negative",number);

}


