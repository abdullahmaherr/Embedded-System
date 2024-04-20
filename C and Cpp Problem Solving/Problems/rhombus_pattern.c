/**********************************************************************************************
 * Module : Problem Solving
 *
 * File Name : rhombus_pattern.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program to display Rhombus using stars pattern.
 *
 * Created on: Feb 1, 2023
 ***********************************************************************************************/
#include<stdio.h>


int main(void)
{
	int i,j,row;

	printf("Enter Number of Raws\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&row);

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < row+i; j++)
		{
			if(j < i)
			{
				printf(" ");
			}else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
