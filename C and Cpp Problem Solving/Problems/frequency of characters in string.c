/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : frequency of characters in string.c
 *
 * Author: Abdullah Maher
 *
 * Write a C function to find the frequency of characters in a string
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/

#include<stdio.h>

#define SIZE (sizeof(arr)/sizeof(arr[0]))

void find_freq(char arr[],int arr_num[],int n);

int main(void)
{
	int i;
	char arr[] = "AbdullahMaherElsayed";
	int arr_num[SIZE];

	fun(arr,arr_num,SIZE);

	for(i = 0; i < SIZE-1; i++)
	{
		printf("Letter %c occurs %d\n",arr[i],arr_num[i]);
	}

	return 0;
}

void find_freq(char arr[],int arr_num[],int n)
{
	int i,j,counter = 0;

	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			if(arr[i] == arr[j])
			{
				counter++;
			}
		}
		arr_num[i] = counter;
		counter = 0;
	}
}


