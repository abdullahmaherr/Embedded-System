/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : longest consecutive occurrence in an array.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function that return the count of the longest consecutive occurrence in an array.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 15

void most_occur(int *a);

int main(void)
{
	int arr[SIZE_ARR] = {1,2,2,2,2,2,2,3,3,3,4,4,4,4,4};

	most_occur(arr);

}
void most_occur(int *a)
{
	int i,count = 0,max = 0;

	for (i = 0; i < SIZE_ARR-1; i++)
	{
		if(a[i] == a[i+1])
		{
			count++;
			if(max < count)
			{
				max = count;
			}
		}
		else
		{
			count = 0;
		}
	}

	printf("The Longest Consecutive Occurrence of Number is %d",(max+1));/*Print Max+1 as in the code it's compare every tow index*/
}

