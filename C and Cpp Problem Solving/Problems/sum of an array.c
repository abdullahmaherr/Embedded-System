/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : sum of an array.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that find the sum of an array is the sum of its individual elements.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include<stdio.h>
#define SIZE_ARR 4

int summation(int *numbers)
{
	int i,sum = 0;
	for(i = 0; i < SIZE_ARR; i++)
	{
		sum += (*(numbers + i));
	}
	return sum;
}

int main(void)
{
	int arr[SIZE_ARR] = {1,2,3,4};
	int result = summation(arr);

	printf("The Summation Is %d\n",result);

	return 0;
}
