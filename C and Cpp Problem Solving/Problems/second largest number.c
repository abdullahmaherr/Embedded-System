/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : second largest number.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function to find the second largest number in an array and return its value.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/

#include<stdio.h>

#define SIZE_ARR 15

int main(void)
{
	int arr[SIZE_ARR] = {1,3,45,677,88,77,722,65,43,567,33,445,78,99,765};
	int i;
	unsigned int num1 = 0,num2;

	for(i = 0; i <= SIZE_ARR; i++)
	{
		if(num1 < arr[i])
		{
			num2 = num1;
			num1 = arr[i];
		}
		else if((num2 < arr[i]))
		{
			num2 = arr[i];
		}
	}

	printf("The Largest Number Is %d\nThe Second Large Number is %d",num1,num2);

	return 0;
}
