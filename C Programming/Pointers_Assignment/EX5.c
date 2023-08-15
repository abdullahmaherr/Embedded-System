/*============================================================================================
 * Module : Assignment of Pointers
 *
 * File Name : EX5.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to show a pointer to an array which contents are pointer to structure.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include<stdio.h>

#define No_of_emp 2

typedef struct{
	char *Name;
	int ID;
}data;

int main(void)
{
	data emp1 = {"Ahmed",1000};
	data emp2 = {"Alex",1002};

	data * emp_arr[No_of_emp] = {&emp1,&emp2};

	data ** ptr = emp_arr;

	for(int i = 0; i < No_of_emp; i++)
	{
		printf("Employee Name: %s.\tEmployee ID: %d\n",(*(ptr+i))->Name,(*(ptr+i))->ID);
	}
}
