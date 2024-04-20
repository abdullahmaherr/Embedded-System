/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : factorial.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that reads a positive integer and computes the factorial.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	/*getting number from user*/
	unsigned long long num;
		printf("Enter the Number\n");
		scanf("%llu",&num);


	/*calculating the factorial*/
	unsigned long long fact = num;
	unsigned long long i;
	for(i = num; i >= 1; i--)
	{
		fact = fact * i;
	}
	printf("the factorial of %llu is %llu\n",num,fact);

	return 0;
}

