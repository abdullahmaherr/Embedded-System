/*************************************************************************************************************
 * Project : Assignment of Basic
 *
 * File Name : EX7.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a  C Program to Swap Two Numbers
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
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

	var1 = var1 ^ var2;
	var2 = var1 ^ var2;
	var1 = var1 ^ var2;

	printf("The First Number After Swapping is %d\n",var1);
	fflush(stdin);fflush(stdout);

	printf("The Second Number After Swapping is %d\n",var2);
	fflush(stdin);fflush(stdout);

	return 0;
}