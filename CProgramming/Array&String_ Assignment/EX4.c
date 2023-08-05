/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX4.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that insert element to an array.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define SIZE_ARR 10

void insert(int *arr, int num, int loc);

int main(void)
{
	int arr[SIZE_ARR] = {1,2,3,4,5,6,7,8,9,10};
	int i,element,location;

	printf("Enter the element\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);

	printf("Enter the location\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &location);

	printf("The original array is:\n");
	fflush(stdin);fflush(stdout);

	// Print the original array
	for (i = 0; i < SIZE_ARR; i++)
	{
		printf("%d\t", arr[i]);
		fflush(stdin);fflush(stdout);
	}

	printf("\n");
	insert(arr,element,location);

	// Print the new array
	printf("The new array is:\n");
	fflush(stdin);fflush(stdout);

	for (i = 0; i < SIZE_ARR; i++)
	{
		printf("%d\t", arr[i]);
		fflush(stdin);fflush(stdout);
	}
	return 0;
}

void insert(int *arr, int num, int loc)
{
	arr[loc-1] = num;
}


