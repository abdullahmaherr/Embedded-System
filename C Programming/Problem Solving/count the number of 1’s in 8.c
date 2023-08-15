/*************************************************************************************************************
 * Project :Problem Solving
 *
 * File Name : count the number of 1’s in 8.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function to count the number of 1’s in an unsigned 8-bit integer.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

int masking(unsigned int n);

int main (void)
{
	unsigned char num = 0xB5;

	printf(" the number of 1's is \t%d",masking(num));

	return 0;
}

int masking(unsigned int n)
{
	unsigned char mask = 0x01;
	unsigned char i,counter = 0;

	for(i =0; i<8;i++)
	{
		if((n >> i)& mask)
			counter++;
	}
	return counter;
}
