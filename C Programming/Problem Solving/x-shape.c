/************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : x-shape.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a program to display cross or X-shape using stars pattern.
 *
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include<stdio.h>

int main(void)
{
	int i,j,row;

	printf("Enter Number of Raws\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&row);

	for(i = 0; i < row; i++)/*Loop for the Raws*/
	{
		for(j = 0; j < row; j++)
		{
			if((j == i) || (j == row-i-1))
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}
}
