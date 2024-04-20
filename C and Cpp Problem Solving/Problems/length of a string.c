/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : length of a string.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a function that Write a function to find the length of a string.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 30

void find_length(char *str);

int main(void)
{
	char string[SIZE_ARR];

	printf("Enter The String\n");/*Read String From User*/
	fflush(stdin); fflush(stdout);
	gets(string);

	find_length(string);

	return 0;
}

void find_length(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	printf("The length of string is\t%d character",i);
}
