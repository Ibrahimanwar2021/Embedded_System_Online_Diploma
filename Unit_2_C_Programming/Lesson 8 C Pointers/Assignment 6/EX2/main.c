/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: ibrah
 */


#include <stdio.h>

int main()
{
    char character = 'A';
    char* ptr = &character;
    printf("The Alphabets are: \n");
    while(*ptr != '[')
    {
        printf("%c  ",*ptr);
        character++;
    }
    return 0;
}
