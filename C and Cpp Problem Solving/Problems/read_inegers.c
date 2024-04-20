/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : read_inegers.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that take two integers from the user and print the results 
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	int num1, num2, result;
	printf("Enter first Number\n");
	scanf("%d",&num1);
	printf("Enter second Number\n");
	scanf("%d",&num2);
	result = ((num1 + num2) * 3) - 10;
	printf("The Result is %d\n",result);
	return 0;
}

