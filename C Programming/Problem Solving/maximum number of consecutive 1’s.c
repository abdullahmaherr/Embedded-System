/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : maximum number of consecutive 1’s.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function to count the maximum number of consecutive 1’s in an unsigned 32 bits integer.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include<stdio.h>

int masking(unsigned int a)
{
	unsigned int mask = 0x80000000;
	unsigned int i;

	int counter = 0,max = 0;
	for(i = 0; i < 32; i++)
	{
		if(((a << i) & mask))
		{
			++counter;
			if(max <= counter)
			{
				max = counter;
			}
		}
		else
		{
			counter = 0;
		}
	}
	return max;
}

int main(void)
{
	unsigned int num;

	printf("Enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("the number of consecutive 1's in %d is %d",num,masking(num));

	return 0;

}
