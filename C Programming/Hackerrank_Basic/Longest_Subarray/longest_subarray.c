/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : longest_subarray.c
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

#define ARR_SIZE	100000


int longestSubarray(int arr_count, int *arr)
{

}


int main(void)
{
	int arr_count,result;
	int arr[ARR_SIZE];


	scanf("%d",&arr_count);
	fflush(stdin);fflush(stdout);


	for(int i = 0; i < arr_count; i++)
	{
		scanf("%d",&arr[i]);
		fflush(stdin);fflush(stdout);
	}


	result = longestSubarray(arr_count, arr);

	printf("%d",result);

	return 0;
}
