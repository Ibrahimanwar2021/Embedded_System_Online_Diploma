/*
 * main.c
 *
 *  Created on: Jun 29, 2022
 *      Author: ibrah
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float num, root;

    printf("Enter a number to find its square root: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &num);
    root = sqrt(num);
    printf("The square root of %.0f = %.3f", num, root);

    return 0;
}

