/*
 * main.c
 *
 *  Created on: Jun 17, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{
	    char s[100],i;
		printf("Enter a string: ");
		fflush(stdout); fflush(stdin);
		scanf("%s",s);
        for(i=0;s[i]!=0;i++);

        printf("Length of string: %d",i);

}
