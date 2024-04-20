/*************************************************************************************************************
 * Project  : Problem Solving
 *
 * File Name : compare two arrays.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function that compare between 2 arrays with the same length.
 It shall return 0 if the two arrays are identical and 1 if not. 
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 9

int check(int *a,int *b)
{
	int i;
	for(i = 0;i < SIZE_ARR; i++)
	{
		if(a[i] != b[i])
			return 1;
	}
	return 0;
}

int main(void)
{
	int res;
	int arr1[SIZE_ARR] = {1,2,3,4,5,6,7,8,9};
	int arr2[SIZE_ARR] = {1,2,3,4,5,6,7,18,9};

	res = check(arr1,arr2);

	if(res == 0)
		printf("The Arrays are Identical\n");
	else
		printf("The Arrays are not Identical\n");

	return 0;
}

