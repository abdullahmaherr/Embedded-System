/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : number is a power of 3.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function that return 0 if a given number is a power of 3, otherwise return 1
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include <math.h>


int cubert(int n)
{
	while(1)
	{

		if((n % 3) == 0)
		{
			if(n == 3)
			{
				return 0;
			}
			n = n / 3;
		}
		else
		{
			return 1;
		}
	}
}

int main(void)
{
	int num,res;
	printf("Enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	res = cubert(num);

	if(res == 0)
		printf("the number is power of 3\n");
	else
		printf("the number is not power of 3\n");

	return 0;
}
