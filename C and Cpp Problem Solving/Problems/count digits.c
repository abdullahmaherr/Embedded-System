/************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : count digits.c
 *
 * Author: Abdullah Maher
 * 
 * Description :  Write a program to count number of digits in a decimal number.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/

#include <stdio.h>

int main(void)
{
	unsigned int num;
	int count = 1;
	printf("Enter the number\n");
	scanf("%u",&num);

	if(num < 10)
		printf("the number of digit is 1");
	else
	{
		while(num >= 10)
		{
			num/=10;
			count++;
		}
		printf("the number of digit is %d",count);
	}
	return 0;
}

