/************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : pyramid.c
 *
 * Author: Abdullah Maher
 *
 * Description :  Write a program to display a full pyramid using stars pattern.
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

	for(i = 1; i <= row; i++)/*Loop for the Raws*/
	{
		for(j = 1; j <= ((2*row)-1); j++)
		{
			if((j >= (row-i+1)) && (j <= (row+i-1)))
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}
}
