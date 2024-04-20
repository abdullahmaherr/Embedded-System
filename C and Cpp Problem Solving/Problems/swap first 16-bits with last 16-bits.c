/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : swap first 16-bits with last 16-bits.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C program that SWAP the value of the two 16-bits of 32-bits integer number.

 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

int main(void)
{
	long num = 0xAAAABBBB;
	short *n1 = (short*)&num;
	short *n2 = (short*)(n1 + 1);
	short temp;

	printf("The Number Before Swap Is : 0x%lX\n",num);
	fflush(stdin); fflush(stdout);

	temp = (*n1);
	*n1 = (*n2);
	*n2 = temp;

	printf("The Number After Swap Is : 0x%lX\n",num);
	fflush(stdin); fflush(stdout);

	return 0;
}



