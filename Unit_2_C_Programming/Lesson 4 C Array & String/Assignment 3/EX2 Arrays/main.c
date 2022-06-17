/*
 * main.c
 *
 *  Created on: Jun 17, 2022
 *      Author: ibrah
 */
#include<stdio.h>

int main()
{
	int n , i;
	float arr[50],sum=0.0,average;
	printf("Enter the numbers of data:\n");
	fflush(stdout);
	scanf("%d",&n);
	if(n>50 || n<=0)
	{
		printf("out of range please enter n again");
		fflush(stdout);
		scanf("%d",&n);
	}
	for (i=0 ; i<n ; i++)
	{
		printf("%d. Enter number :",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	average = sum/n;
	printf("average = %.2f",average);
}

