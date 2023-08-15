/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : the nth Fibonacci number.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program which given n, returns the nth Fibonacci number.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include<stdio.h>

void fibona_number(unsigned int n);

int main(void)
{
	unsigned int num;

	printf("Enter the Number to Find The nth Number in The Fibonacci Series\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	fibona_number(num);

	return 0;
}


void fibona_number(unsigned int n)
{
	unsigned int num1 = 0, num2 = 1, num3;
	int i;

	for(i = 2; i < n; i++)
	{
		num3 = num2 + num1;
		num1 = num2;
		num2 = num3;
	}

	printf("The %dth Number of The Series is %d",n,num3);
}




