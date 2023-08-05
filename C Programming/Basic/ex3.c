/***************************************************************************************
 * Assignment 1
 *
 * File Name : ex3.c
 *
 * Author : Abdullah Maher
 *
 * Description : C Program to Add Two Integers
 *
 **************************************************************************************/
#include<stdio.h>

int main(void)
{
	int var1,var2;

	printf("Enter First Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &var1);

	printf("Enter Second Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &var2);


	printf("Sum =  %d",var1+var2);

	return 0;
}
