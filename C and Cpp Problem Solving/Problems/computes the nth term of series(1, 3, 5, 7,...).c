/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : computes the nth term of series(1, 3, 5, 7,...).c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program that computes the nth term of the arithmetic series:1, 3, 5, 7, 9,....
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include<stdio.h>

void find_number(unsigned int n);

int main(void)
{
	unsigned int num;

	printf("Enter the Number to Find The nth Number of The Series\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	find_number(num);

	return 0;
}


void find_number(unsigned int n)
{
	unsigned int num = 1;
	int i;
	for(i = 1; i < n; i++)
	{
		num+=2;
	}

	printf("The %dth Number of The Series is %d",n,num);
}




