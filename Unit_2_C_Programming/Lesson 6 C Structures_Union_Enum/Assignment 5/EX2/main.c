/*
 * main.c
 *
 *  Created on: Jul 2, 2022
 *      Author: ibrah
 */


#include "stdio.h"

struct Distance
{
	int feet;
	float inch;
}Distance1, Distance2, Result;

int main(void)
{
	printf("Enter information for first distance ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%d", &Distance1.feet);
	printf("Enter inch: ");
	fflush(stdout);

	scanf("%f",&Distance1.inch);
	printf("\nEnter information for 2nd distance");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &Distance2.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &Distance2.inch);
	Result.feet = Distance1.feet + Distance2.feet;
	Result.inch = Distance1.inch + Distance2.inch;
	while(Result.inch >= 12.0)
	{
	Result.inch = Result.inch - 12.0;
	Result.feet++;
	}
	printf("\nSum of distances = %d\'-%0.2f\"", Result.feet, Result.inch);
	return 0;
}
