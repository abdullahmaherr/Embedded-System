/*************************************************************************************************************
 * Project : Hackerrank Intermdiate
 *
 * File Name : Equalizing_Array_Elements.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int compare(const void *a, const void *b)
{
	return *(const unsigned int *)a - *(const unsigned int *)b;
}

unsigned int minOperation(unsigned int n,unsigned int* arr,unsigned int threshold,unsigned int d)
{
	unsigned int rept[200000][2] = {0};
	unsigned int temp, i, divopert, minOpert = INT_MAX;

	/* Sort The Array Elemnets */
	qsort(arr, n, sizeof(int), compare);

	for(i = 0; i < n; i++)
	{
		temp = arr[i];
		divopert = 0;

		while(1)
		{
			rept[temp][0] += 1;
			rept[temp][1] += divopert;

			if(rept[temp][0] >= threshold)
			{
				if(minOpert > rept[temp][1])
					minOpert = rept[temp][1];
			}

			if(temp == 0)
				break;

			temp /= d;
			divopert++;

		}
	}

	return minOpert;
}

int main(void)
{
	/* Read Number of Elements From The User */
	unsigned int n;
	scanf("%d",&n);

	/* Read The Elements From The User */
	unsigned int* arr = (unsigned int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		
	}

	/* Read The Threshold Number From The User */
	unsigned int threshold;
	scanf("%d",&threshold);

	/* Read The Division Number From The User */
	unsigned int d;
	scanf("%d",&d);

	unsigned int res = minOperation(n,arr,threshold,d);

	printf("%d",res);

	free(arr);

	return 0;
}
