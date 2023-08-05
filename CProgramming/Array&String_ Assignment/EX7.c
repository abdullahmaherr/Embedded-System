/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX7.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that Length of a string.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define SIZE_ARR 30

void find_length(char *str);

int main(void)
{
	char string[SIZE_ARR];

	printf("Enter the String\n");
	fflush(stdin);fflush(stdout);
	gets(string);

	find_length(string);


	return 0;
}

void find_length(char *str)
{
	int i;
	for(i = 0; str[i] != '\0'; i++);

	printf("The Length of String %s is %d\n",str,i);
}


