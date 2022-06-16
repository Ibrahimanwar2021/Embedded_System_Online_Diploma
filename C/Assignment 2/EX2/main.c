/*
 * main.c
 *
 *  Created on: Jun 16, 2022
 *      Author: ibrah
 */

# include "stdio.h"

int main ()
{

	    char alphabet;
		printf("Enter an alphabet: ");
		fflush(stdout); fflush(stdin);
		scanf("%c",&alphabet);

		char vowels[] = {'a','o','e','i','u'};

		int i  ;
		for(i = 0 ;i<5 ; i++)
		{
			// check if the alphabet is small or capital vowel
			if (alphabet == vowels[i] || alphabet == vowels[i]-32)

				{
				  printf("%c is a vowel.",alphabet);
				  break;
				}

		}
		if(i==5){
			 printf("%c is a consonant.",alphabet);
		}
}




