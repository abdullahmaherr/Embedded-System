/***************************************************************************************
 * Assignment 1
 *
 * File Name : ex5.c
 *
 * Author : Abdullah Maher
 *
 * Description : C Program to Find ASCII Value of a Character
 *
 **************************************************************************************/
#include<stdio.h>

int main(void)
{
	char var;

	printf("Enter a Character\t");
	fflush(stdin);fflush(stdout);
	scanf("%c", &var);

	printf("ASCII Value of %c is %d",var,var);

	return 0;
}
