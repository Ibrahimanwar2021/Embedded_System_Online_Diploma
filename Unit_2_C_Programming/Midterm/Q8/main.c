/*
 * main.c
 *
 *  Created on: Jun 29, 2022
 *      Author: ibrah
 */

#include <stdio.h>
void print(int rev[],int size)
{
	int i;
    printf("\n The array in reverse order: ");
    for(i=0;i<size;i++)
    {
        printf(" %d",rev[i]);
    }
}
void reverse(int arr[], int size)
{
    int rev[10];
    int i;
    for(i=size-1;i>=0;i--)
    {
        rev[size-i-1]=arr[i];
    }
    print(rev,size);
}
int main()
{
	int arr[10];
	    int size, i;
	    printf("Enter size of the array: ");
	    fflush(stdout); fflush(stdin);
	    scanf("%d", &size);
	    printf("Enter elements in array: ");
	    fflush(stdout); fflush(stdin);
	    for(i=0; i<size; i++)
	    {
	        scanf("%d", &arr[i]);
	    }
    reverse(arr,size);
    return 0;
}
