/*
 * main.c
 *
 *  Created on: Jun 17, 2022
 *      Author: ibrah
 */
# include "stdio.h"

int main ()
{
	    char s[100],temp;
        int i,j=0;
		printf("Enter the string: ");
		fflush(stdout); fflush(stdin);
		gets(s);
		i=0;
        j=strlen(s)-1;
        while(i<j)
        {
        	temp=s[i];
        	s[i]=s[j];
        	s[j]=temp;
        	i++;
			j--;
        }
        printf("Reverse string is: %s ",s);


}

