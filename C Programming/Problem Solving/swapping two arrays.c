/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : swapping two arrays.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Program for swapping two arrays A & B 
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR

void Swap(int *a,int *b)
{
	int temp,i;
	for(i = 0;i<SIZE_ARR;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return a;
}

int main(void)
{
	int arr1[SIZE_ARR] = {1,2,3,4,5,6,7,8};
	int arr2[SIZE_ARR] = {11,12,13,14,15,16,17,18};

	int i;

	printf("Array 1 before swap\n");
	for(i=0; i<8; i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	printf("Array 2 before swap\n");
	for(i=0; i<8; i++)
	{
		printf("%d\t",arr2[i]);
	}

	Swap(arr1,arr2);
	printf("\n");
	printf("Array 1 after swap\n");
	for(i=0; i<8; i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	printf("Array 2 after swap\n");
	for(i=0; i<8; i++)
	{
		printf("%d\t",arr2[i]);
	}

	return 0;
}

