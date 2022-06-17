/*
 * main.c
 *
 *  Created on: Jun 17, 2022
 *      Author: ibrah
 */
#include<stdio.h>
int main()
{
	int arr[20],i,location,n,num;
	printf("\nEnter no of elements:");
	fflush(stdout);
	scanf("%d",&n);
	for (i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" \nEnter the element to be inserted:");
	fflush(stdout);
	scanf("%d",&num);
	printf("Enter the location:");
	fflush(stdout);
	scanf("%d",&location);

	for(i=n ; i>=location ; i--)
	{
		arr[i]=arr[i-1];                  //making space
	}
	n++;
	arr[location-1]=num;

	for (i=0 ; i<n ; i++)
	{
		printf("%d ",arr[i]);
		fflush(stdout);
	}
}

