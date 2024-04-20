/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : Fibonacci recursive.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program which given n, returns the nth Fibonacci number.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include<stdio.h>

int fibona_number(unsigned int n);

int main(void)
{
	unsigned int num,index;

	printf("Enter the Number to Find The nth Number in The Fibonacci Series\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&index);

	num = fibona_number(index);
	printf("\nThe %dth Number of The Series is %d",index,num);

	return 0;
}


int fibona_number(unsigned int n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}else
	{
		return fibona_number(n-1) + fibona_number(n-2);
	}
}
