/*************************************************************************************************************
 * Project : Assignment of Basic
 *
 * File Name : EX2.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Program to Print a Integer Entered by a User
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
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