/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : simple calculator.c
 *
 * Author: Abdullah Maher
 * 
 * Description :  Write a program to make a simple calculator.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	float operat, no1, no2;
	printf("Enter the first number\n");
		scanf("%f",&no1);
	printf("Enter the second number\n");
		scanf("%f",&no2);
	printf("Enter the Operation\n1 for mult\n2 for div\n3 for add\n4 for sub\n");
	scanf("%d",&operat);

	switch(operat)
	{
	case 1 : printf("%f\n",no1 * no2);
	    break;
	case 2 : printf("%f\n",no1 / no2);
		break;
	case 3 : printf("%f\n",no1 + no2);
		break;
	case 4 : printf("%f\n",no1 - no2);
		break;
	}
	return 0;
}

