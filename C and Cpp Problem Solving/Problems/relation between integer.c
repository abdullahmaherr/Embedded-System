/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Nmae : relation between integer.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that print the relation between two integer number
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	int value1, value2;

	printf("enter the first value\n");//reading first value
	scanf("%d",&value1);

	printf("enter the second value\n");//reading second value
	scanf("%d",&value2);

	if(value1 == value2 )//checking the equality
		printf("values are equal\n");

	else if(value1 != value2)
	{
		printf("values are not equal\n");

		if(value1 > value2)
			printf("first value is bigger\n");
		else
			printf("second value is bigger\n");
	}
}

