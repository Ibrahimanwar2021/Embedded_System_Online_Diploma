/*
 * main.c
 *
 *  Created on: Jul 2, 2022
 *      Author: ibrah
 */


#include "stdio.h"
#define PI 3.14

int main(void)
{

	float radius, area;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("Area = %0.2f", area);
return 0;
}
