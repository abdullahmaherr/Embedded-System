/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : FIRST occurrence of a number.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that return the index of FIRST occurrence of a number in a given array.(Linear Search Algorithm)
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define SIZE_ARR 10

void linear_search(int *arr, int n);

int main(void)
{
	int arr[SIZE_ARR];
	int i,num;

	printf("Enter the element of the array\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("arr[%d] = ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("The element of the array\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("arr[%d] = %d\t",i,arr[i]);
	}

	printf("\nEnter the Number to Find FIRST Occurrence in The Array\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	linear_search(arr,num);

	return 0;
}


void linear_search(int *ptr, int n)
{
	int i;

	for(i = 0; i < SIZE_ARR; i++)
	{
		if(ptr[i] == n)
		{
			printf("The FIRST Occurrence of Number %d in The Index arr[%d]\n",n,i);
			break;
		}
	}
}



