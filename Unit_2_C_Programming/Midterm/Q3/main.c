/*
 * main.c
 *
 *  Created on: Jun 29, 2022
 *      Author: ibrah
 */

#include <stdio.h>

int prime(int x)
{
    int i,m,flag=1;
    m=x/2;
    for(i=2;i<=m;i++)
    {
        if(x%i != 0)
        {
            flag = 1;continue;
        }
        else
        {
            flag=0;break;
        }
    }return flag;
}

int main()
{
    int num1,num2,flag;
    printf("enter two numbers: ");
    fflush(stdout); fflush(stdin);
    scanf("%d %d",&num1,&num2);
    printf("prime numbers between %d and %d are ",num1,num2);
    num1++;       /*to skip the starting number */
    while(num1<num2)
    {
        flag=prime(num1);
        if(flag==1)
            printf("%d ",num1);
        num1++;
    }
    return 0;
}
