/*************************************************************************************************************
 * Project : Assignment of Basic
 *
 * File Name : EX4.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a  C Program to Multiply two Floating Point Numbers
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
#include<stdio.h>

int main(void)
{
	double var1, var2;

	printf("Enter First Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%f", &var1);

	printf("Enter Second Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%f", &var2);

	printf("Product : %f", (var2 *= var1));

	return 0;
}