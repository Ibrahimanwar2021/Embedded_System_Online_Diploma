/*
 * main.c
 *
 *  Created on: Jun 18, 2022
 *      Author: ibrah
 */

#include<stdio.h>
int factorial(int n);

int main()
{
	int num ;
	printf("Enter a positive integer :");
	fflush(stdout);
	scanf("%d",&num);

	printf("the factorial of %d = %d",num,factorial(num));
	fflush(stdout);

}

int factorial(int n)
{
		if(n!=1)
		return n*factorial(n-1);
}
