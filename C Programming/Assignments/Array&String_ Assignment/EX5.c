/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX5.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that search element in an array.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define SIZE_ARR 10

void search(int *arr, int num);

int main(void)
{
	int arr[SIZE_ARR] = {};
	int i,element;

	printf("Enter the elements of the array\n");
	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("arr[%d] = ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);

	}

	printf("Enter the element\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);

	search(arr,element);


	return 0;
}

void search(int *arr, int num)
{
	int i;
	for(i = 0; i < SIZE_ARR; i++)
	{
		if(num == arr[i])
		{
			printf("the number %d is in arr[%d]",num,i+1);
			break;
		}
	}
}


