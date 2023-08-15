/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : reverse array.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function that takes an array as input and reverse it.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 6

void reverse(int *a);

int main(void)
{
	int i;
	int arr[SIZE_ARR];
	for(i = 0; i< SIZE_ARR; i++)
	{
		printf("Enter The Number arr[%d]\n",i);/*Read Numbers From User*/
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}

	reverse(arr);

	printf("The Numbers After Reverse\n");
	fflush(stdin); fflush(stdout);

	for(i = 0; i< SIZE_ARR; i++)
	{
		printf("arr[%d] = %d\t",i,arr[i]);
	}

	return 0;
}

void reverse(int *a)
{
	int i;
	int j = SIZE_ARR -1;

	for(i = 0; i < j; i++,j--)
	{
		a[i] = a[i] + a[j];
		a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}

}