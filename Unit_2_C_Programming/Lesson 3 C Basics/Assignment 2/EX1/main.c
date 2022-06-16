/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */
# include "stdio.h"


int main ()
{

	int number;

		printf("Enter an integer you want to check: ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&number);

	    if (number%2==0)
			printf("%d is even",number);
		else
			printf("%d is odd",number);
}


