/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: ibrah
 */


#include <stdio.h>

int main()
{
    char str[50],*ptr;
    printf("enter a string: ");
    fflush(stdout);
    gets(str);
    int i=strlen(str);
    ptr=str+i;
    printf("Reversed string is: ");
    while(i>=0)
    {
        printf("%c",*ptr);
        ptr--;i--;
    }
    return 0;
}
