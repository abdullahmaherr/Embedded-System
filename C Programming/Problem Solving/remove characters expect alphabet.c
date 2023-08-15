/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : remove characters expect alphabet.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a function to remove all characters in a string expect alphabet
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 30

void remove_gar(char *str);

int main(void)
{
	char string[SIZE_ARR];

	printf("Enter The String\n");/*Read String From User*/
	fflush(stdin); fflush(stdout);
	gets(string);

	remove_gar(string);

	printf("The String After Clean is %s",string);

	return 0;
}

void remove_gar(char *str)
{
	int i,j;
	for(i = 0; str[i] != '\0'; i++)
	{
		while(!(str[i] >= 'A') && (str[i] <= 'z') && (str[i] != '\0'))
		{
			for(j = i; str[j] != '\0'; j++)
			{
				str[j] = str[j+1];
			}

		}
	}
}
