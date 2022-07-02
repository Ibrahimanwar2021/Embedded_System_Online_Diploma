/*
 * main.c
 *
 *  Created on: Jun 29, 2022
 *      Author: ibrah
 */


#include<stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    fflush(stdout);	fflush(stdin);
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    printf("sum = %d", sum);

    return 0;
}
