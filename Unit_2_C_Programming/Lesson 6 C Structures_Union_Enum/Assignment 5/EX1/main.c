/*
 * main.c
 *
 *  Created on: Jul 2, 2022
 *      Author: ibrah
 */

#include "stdio.h"

struct student
{
	char name[20];
	unsigned int roll;
	float marks;
}s;

void main()
{
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s", s.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &s.marks);
	printf("Displaying Information");
	printf("\nname: %s", s.name);
	printf("\nRoll: %d", s.roll);
	printf("\nMarks: %0.1f", s.marks);
}

