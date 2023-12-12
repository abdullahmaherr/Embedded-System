/*************************************************************************************************************
 * Project : Hackerrank Intermdiate
 *
 * File Name : Bitwise_AND.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool findPowerTwo(unsigned int num)
{
	return (1 && (num & (num - 1)));
}

long countPairs(unsigned int arr_count, int* arr)
{
	unsigned long counter = 0;
	unsigned int i,j,resAnd = 0;

	for(i = 0; i < (arr_count-1); i++)
	{
		for(j = (i+1); j < arr_count; j++)
		{

			resAnd = (arr[i] & arr[j]);

			if(resAnd == 0)
			{
				continue;

			}else if(!(findPowerTwo(resAnd)))
			{
				counter++;
			}
		}
	}

	return counter;
}

int main(void)
{
	/* Read Number of Elements From The User */
	unsigned int arr_count;
	scanf("%d",&arr_count);

	/* Read The Elements From The User */
	int* arr = (int*)malloc(arr_count * sizeof(int));
	for(int i = 0; i < arr_count; i++)
	{
		scanf("%d",&arr[i]);
	}

	unsigned long res = countPairs(arr_count,arr);

	printf("%ld",res);

	free(arr);

	return 0;
}
