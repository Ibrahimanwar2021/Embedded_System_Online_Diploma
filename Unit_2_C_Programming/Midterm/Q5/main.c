/*
 * main.c
 *
 *  Created on: Jun 29, 2022
 *      Author: ibrah
 */
#include <stdio.h>
int main()
{
	int num,i,k,count;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("the binary number of %d is ",num);
	for(i=31; i>=0; i--)
	{
    	k = num >> i;
		if(k&1){
			printf("1");
        ++count;
		}
		else
			printf("0");
	}
	printf(" the number of ones is %d",count);
	return 0;
}

/*Second solution*/

/*void binary(unsigned int num)
{
    int i,count=0;
    printf("the binary number of %d is ",num);
    for(i=0;i<32;i++)
    {
        if(num<<i & 1<<31)
        {
            printf("1");
            ++count;
        }
        else
            printf("0");
    }
    printf(" the number of ones is %d",count);
}
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d",&num);
    binary(num);
    return 0;
}*/
