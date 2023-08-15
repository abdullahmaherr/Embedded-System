/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : selction sort algorithm.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that use the selction sort algorithm to sort an integer array in ascending order.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include<stdio.h>

#define SIZE_ARR 10

void selction_sort(int *arr);
void swap(int *a, int *b);

int main(void)
{
	int arr[SIZE_ARR];
	int i;

	printf("Enter the element of the array\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("arr[%d] = ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("The element of the array Before selction Sort\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("%d\t",arr[i]);
	}

	selction_sort(arr);

	printf("\nThe element of the array After selction Sort\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("%d\t",arr[i]);
	}

	return 0;
}


void selction_sort(int *ptr)
{
	int i,j;

	for(i = 0; i < (SIZE_ARR-1); i++)
	{
		for(j = i+1; j < SIZE_ARR; j++)
		{
			if(ptr[i] > ptr[j])
			{
				swap(&ptr[i],&ptr[j]);
			}
		}
	}
}

void swap(int *a, int *b)
{
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b);
}

