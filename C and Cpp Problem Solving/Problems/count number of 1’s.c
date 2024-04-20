/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : count number of 1’s.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function to count the number of 1’s in an unsigned 32-bit integer.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

int masking(unsigned int n);

int main(void)
{
	unsigned int num;
	int count;
	printf("Enter The Number\n");
	fflush(stdin); fflush(stdout);
	scanf("%u",&num);

	count = masking(num);
	printf("the number of 1's at %u is %d\n",num,count);

	return 0;
}

int masking(unsigned int n)
{
	unsigned int mask = 0x80000000;
	int i,counter = 0;
	for(i = 0; i < 32; i++)
	{
		if((n << i) & mask)
		{
		counter++;
		}

	}
	return counter;
}

