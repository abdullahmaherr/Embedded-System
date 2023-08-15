/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : perfect square.c
 *
 * Author: Abdullah Maher
 * 
 * Description :  Write a program that reads a positive integer and checks if it is a perfect square
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	/* taking number from user*/
	int var;
	printf("Enter the Integer Number\n");
	scanf("%d",&var);
	int root = sqrt(var);

	/* Checking perfect square*/

	if( var == root * root )
	{
		printf("The number is perfect square");
	}else
	{
		printf("The number is not perfect square");
	}

}

