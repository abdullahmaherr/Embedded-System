/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : sum of first n.c
 *
 * Author: Abdullah Maher
 * 
 * Description :  Print sum of first 100 integers.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	float sum = 100;
	sum *= (sum + 1) / 2;

	printf("the result is%.0f\n",sum);

	/*checking the result*/
	if(sum == 5050)
	{
		printf("the result is true\n");
	}
	else
	{
		printf("the result is false\n");
	}
	return 0;
}

