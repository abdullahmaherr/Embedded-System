/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : converts uppercase to lowercase.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a function which, given a string, converts all uppercase letters to lowercase, leaving the others unchanged
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 25

void convert(char *a);

int main(void)
{
	char arr[SIZE_ARR];

	printf("Enter the string\n");/*Read String From User*/
	gets(arr);
	printf("\n");

	convert(arr);

	printf("%s\n",arr);

	return 0;
}

void convert(char *a)
{
	int i;
		for(i = 0; i < SIZE_ARR; i++)
		{
			if(('A' <= a[i]) && (a[i] <= 'Z'))
				a[i] += 32;
		}
}