/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: ibrah
 */

#include <stdio.h>

struct Semployee
{
    char* name;
    int ID;
};

int main()
{
    static struct Semployee emp1 = {"Ibrahim",1},emp2 = {"Anwar",2},emp3 = {"Mohamed",3};
    struct Semployee (*arr[3]) = {&emp1,&emp2,&emp3};
    struct Semployee* ((*ptr)[3]) = &arr;
    for(int i=0;i<3;i++)
    {
        printf("Employee Name: %s\n",(*(*ptr+i))->name);
        printf("Employee ID: %d\n\n",(*(*ptr+i))->ID);
    }
    return 0;
}
