/*
 * main.c
 *
 *  Created on: Jun 18, 2022
 *      Author: ibrah
 */
#include<stdio.h>
int check_Prime_Number(int n);
int main(void)
{
	int i, num1 , num2 , flag;
	printf("Enter two numbers (intervals):");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Prime numbers between %d and %d are: ", num1, num2);
	for (i = num1 + 1; i < num2; ++i) {
		flag = check_Prime_Number(i);

		if (flag == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
int check_Prime_Number(int n) {
	int j, flag = 1;

	for (j = 2; j <= n / 2; ++j) {

		if (n % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

