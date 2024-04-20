/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : Celsius to Fahrenheit.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program for converting temperature from degrees Celsius to degrees Fahrenheit
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	int selection;
	printf("For celsius press 1\nFor fahrenheit press 2 ");//reading the degree
	scanf("%d",&selection);

	if( selection == 1)
	{
		int T1;
		printf("enter the temp");
		scanf("%d",&T1);
		printf("The Temp in C is %d",T1);
	}

	else if(selection == 2)
	{
		int T2;
		printf("enter the temp");
		scanf("%d",&T2);
		printf("The Temp in F is %d",(T2 * 9/5) + 32);
	}

	return 0;
}

