/*************************************************************************************************************
 * Project :Problem Solving
 *
 * File Name : swaps two numbers.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that swaps the value of two integer numbers.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

/* function to swap 2 integers*/

void swap(int *n1, int *n2)
{
	*n1 = (*n1) + (*n2) ;
	*n2 = (*n1) - (*n2);
	*n1 = (*n1) - (*n2);
}

int main (void)
{
	int num1 = 5,num2 = 6;
	printf("before swap num1 = %d\t num2 = %d\n",num1,num2);

	swap(&num1,&num2);
	printf("after swap num1 = %d\t num2 = %d\n",num1,num2);

	return 0;
}
