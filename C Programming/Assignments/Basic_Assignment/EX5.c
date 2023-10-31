/*************************************************************************************************************
 * Project : Assignment of Basic
 *
 * File Name : EX5.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a  C Program to Find ASCII Value of a Character
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
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