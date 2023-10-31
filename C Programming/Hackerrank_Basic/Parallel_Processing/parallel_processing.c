/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : parallel_processing.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARR_FILES_SIZE	100000


void swap(int *a,int *b)
{
	(*a) = (*a) + (*b);
	(*b) = (*a) - (*b);
	(*a) = (*a) - (*b);
}


void arrange_ascend(int *arr,int size)
{
	int i,j;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size-i-1; j++)
		{
			if(arr[j] < arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}

		}
	}
}

long long minTime(int files_count, int *files, int numCores, int limit)
{
	int i;
	long long result = 0;

	arrange_ascend(files,files_count);

	for(i = 0; i < files_count; i++)
	{
		if(((files[i] % numCores) == 0) && (limit > 0))
		{
			result += (files[i] / numCores);
			limit--;
		}else
		{
			result += files[i];
		}
	}

	return result;

}



int main(void)
{
	int files_count= 0;
	int files[ARR_FILES_SIZE];
	int numCores;
	int limit;

	scanf("%d",&files_count);
	fflush(stdin);fflush(stdout);


	for(int i = 0; i<files_count; i++)
	{
		scanf("%d",&files[i]);
		fflush(stdin);fflush(stdout);
	}

	scanf("%d",&numCores);
	fflush(stdin);fflush(stdout);

	scanf("%d",&limit);
	fflush(stdin);fflush(stdout);

	long long result = minTime(files_count, files, numCores, limit);

	printf("%lld",result);
	fflush(stdin);fflush(stdout);

	return 0;

}
