/************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : display alphabets.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program to display English alphabets from A to Z.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	char i;
	for(i = 65; i<= 90;i++)
	{
		printf("the alphabet are%c\t ",i);
	}
	return 0;
}

