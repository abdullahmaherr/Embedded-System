/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX8.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that Reverse a string.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>
#include<string.h>

#define SIZE_ARR 30

void reverse(char *str);

int main(void)
{
	char string[SIZE_ARR];

	printf("Enter the String\n");
	fflush(stdin);fflush(stdout);
	gets(string);

	printf("The String Before Reverse is %s\n",string);

	reverse(string);

	printf("The String After Reverse is %s\n",string);

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


