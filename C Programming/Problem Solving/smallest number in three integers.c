/*************************************************************************************************************
 * Project : Probem Solving
 * 
 * File Name : smallest number in three integers.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that takes three integers, and prints out the smallest number
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	int No1, No2, No3, Min;
	printf("enter the numbers\n");
	scanf("%d",&No1);
	scanf("%d",&No2);
	scanf("%d",&No3);

	/*cheaking the smallest number*/
	Min = No1;

	if(No2 < Min)
	{
		Min = No2;
	}

	if(No3 < Min)
	{
		Min = No3;
	}
	 printf("The Smallest Number is %d",Min);


}

