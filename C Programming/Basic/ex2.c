/***************************************************************************************
 * Assignment 1
 *
 * File Name : ex2.c
 *
 * Author : Abdullah Maher
 *
 * Description : C Program to Print a Integer Entered by a User
 *
 **************************************************************************************/
#include<stdio.h>

int main(void)
{
	int var;

	printf("Enter a Integer\t");
	fflush(stdin);fflush(stdout);
	scanf("%d", &var);

	printf("You Entered %d",var);

	return 0;
}
