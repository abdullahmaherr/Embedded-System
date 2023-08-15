/*============================================================================================
 * Module : Assignment of Struct,Enum and Union
 *
 * File Name : EX3.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to add two complex numbers by using structure.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include<stdio.h>

#define No_of_num 2


typedef struct{
	float real;
	float imag;
}complex;

complex num1,num2,total;

void add_comp(complex *num1, complex *num2);

int main(void)
{
	complex *arr[No_of_num] = {&num1,&num2};

	for(int i = 0; i < No_of_num; i++)
	{
		printf("Enter Real Number for Complex Number %d\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&(arr[i]->real));

		printf("Enter Imaginary Number for Complex Number %d\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&(arr[i]->imag));
	}

	add_comp(&num1,&num2);

	printf("The total complex number is %.2f+%.2fi", total.real, total.imag);

	return 0;
}

void add_comp(complex *num1, complex *num2)
{
	total.real = num1->real + num2->real;
	total.imag = num1->imag + num2->imag;
}