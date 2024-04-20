/**********************************************************************************************
 * Module : Problem Solving
 *
 * File Name : hollow_square.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program to display Hollow Square using stars pattern.
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
		for(j = 0; j < row; j++)
		{
			if((i == 0) || (i == row-1) || (j == 0) || (j == row-1))
			{
				printf("*");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
