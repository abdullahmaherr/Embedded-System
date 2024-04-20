/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : checks prime.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that reads a positive integer and checks if it is a prime.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	/* reading number*/
	int num;
	do{
	printf("Enter the number\n");
	scanf("%d",&num);
	}while(num <= 0);

	/*Checking the prime number*/

	int i,count = 0;
	for(i = 0; i <= num; i++)
	{
		if(num%i == 0)
		{
			count++;
		}
	}
	if(count == 2)
		printf("The number is Prime\n");
	else
		printf("The number is not Prime\n");

	return 0;

}

