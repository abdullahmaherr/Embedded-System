/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : remove repeated number in array.c
 *
 * Author: Abdullah Maher
 *
 * Description Write a C function that removes the repeated number of an input sorted array and return a new array without the repeated numbers.
   The function shall return error if the size of the input array is ZERO.

 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include "stdio.h"

#define SIZE_O 10
#define SIZE_n 10


int rm_repated(int *o_arr,int o_size,int *n_arr,int *n_size);

int main(void)
{
	int var,size_used = 0,i;
	int o_arr[SIZE_O] = {1,2,3,3,3,4,4,5,5,5};
	int n_arr[SIZE_n];

	var = rm_repated(o_arr,SIZE_O,n_arr,&size_used);

	if(var == 1)
	{
		for(i = 0; i<size_used-1; i++)
		{
			printf("%d\t",n_arr[i]);
		}
	}


}

int rm_repated(int *o_arr,int o_size,int *n_arr,int *n_size)
{
	int i;
	if(o_size == 0)
	{
		return 0;
	}

	for(i = 0; i <o_size; i++)
	{
		if (o_arr[i] != o_arr[i+1])
        {
        	n_arr[*n_size] = o_arr[i];
        	(*n_size)++;
        }
	}
	n_arr[*n_size] = o_arr[i];
    (*n_size)++;
	return 1;
}
