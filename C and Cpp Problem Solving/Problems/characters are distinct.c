/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : characters are distinct.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function thatWrite a function which, given a string,
 return TRUE if all characters are distinct and FALSE if any character is repeated.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

int find(char *ptr)
{
	int i,j;

	for(i = 0; ptr[i] != '\0'; i++)
	{
		for(j = 0; ptr[j] != '\0'; j++)
		{
			if( j == i)
			{
				continue;
			}else if(ptr[i] == ptr[j])
			{
				return FALSE;
			}

		}
	}

	return TRUE;
}

int main(void)
{
	char arr[SIZE];
	int result;

	printf("Enter the String\n");
	fflush(stdin); fflush(stdout);
	gets(arr);

	result = find(arr);

	if(result == TRUE)
		printf("String is distinct");
	else
		printf("String is not distinct");

	return 0;
}


