/*
 * main.c
 *
 *  Created on: Jul 2, 2022
 *      Author: ibrah
 */

#include "stdio.h"
struct Student
{
	char name[20];
	int roll;
	float marks;
}s[2];

int main(void)
{
	int i;
	printf("Enter information of students: ");
	for(i = 0; i < 2; i++)
	{
	printf("\nFor roll number %d ", i+1);
	printf("\nEnter name: ");
	fflush(stdout);
	scanf("%s", &s[i].name);
	printf("Enter roll: ");
	fflush(stdout);
	scanf("%d", &s[i].roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &s[i].marks);
	}
	printf("Displaying information of students: ");
	for(i = 0; i < 2; i++)
	{
	printf("\nInformation for roll number %d: ", i+1);
	printf("\nName: %s", s[i].name);
	printf("\nMarks: %d", s[i].roll);
	printf("\nMarks: %f", s[i].marks);
	}
	return 0;
}
