/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : reverse a string.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a function to reverse a string by passing it to a function.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <string.h>

#define SIZE_ARR 50

void reverse(char *str);

int main(void)
{
	char string[SIZE_ARR];

	printf("Enter The String\n");/*Read String From User*/
	fflush(stdin); fflush(stdout);
	gets(string);

	printf("String Before Reverse is %s\n",string);

	reverse(string);

	printf("String After Reverse is %s\n",string);

	return 0;
}

void reverse(char *str)
{
	int i,len = (strlen(str)-1);
	char temp;
	for(i = 0; i < len; i++)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;

		len--;
	}
}