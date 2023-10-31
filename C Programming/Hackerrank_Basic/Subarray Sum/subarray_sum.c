/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : subarray_sum.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 *************************************************************************************************************/
#include<stdio.h>

#define ARR_NUMBER_SIZE 100000
#define ARR_QUERY_SIZE 100000

	long res[3];

long *findSum(int numbers_count, int *numbers, int queries_rows, int queries_columns, int queries[][3], int *result_count)
{
	int i,j;
	long sum = 0;

	for(i = 0; i < queries_rows; i++)
	{
		for(j = queries[i][0]; j <= queries[i][1] ; j++)
		{
			if(numbers[j-1] == 0)
			{
				sum += queries[i][2];
			}
			else
			{
				sum += numbers[j-1];
			}
		}
		res[i] = sum;
		sum = 0;
	}

	*result_count = queries_rows;
	return res;
}


int main(void)
{
	int numbers[ARR_NUMBER_SIZE];
	int queries[ARR_QUERY_SIZE][3];
	int i,j;


	int numbers_count = 0;
	scanf("%d",&numbers_count);

	for(i = 0; i <numbers_count; i++)
	{
		scanf("%d",&numbers[i]);
	}

	int queries_count = 0;
	scanf("%d",&queries_count);

	int queries_columns = 0;
	scanf("%d",&queries_columns);

	for(i = 0; i <queries_count; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d",&queries[i][j]);
		}
	}

	int result_count = 0;
	long *result = findSum(numbers_count, numbers, queries_count, queries_columns, queries, &result_count);

	// Print the results
	for (int i = 0; i < result_count; i++)
	{
		printf("%ld\n", result[i]);
	}

}
