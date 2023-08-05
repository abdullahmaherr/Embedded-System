/*************************************************************************************************************
 * Project : Assignment of Basic
 *
 * File Name : EX3.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Program to Add Two Integers
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


	printf("Sum =  %d",var1+var2);

	return 0;
}