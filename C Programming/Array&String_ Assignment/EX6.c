/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX6.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that find frequency of character in a string.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
#include<stdio.h>

#define SIZE_ARR 30

void search(char *str, char ch);

int main(void)
{
	char string[SIZE_ARR];
	char character;

	printf("Enter the String\n");
	fflush(stdin);fflush(stdout);
	gets(string);

	printf("Enter the character\n");
	fflush(stdin);fflush(stdout);
	scanf("%c", &character);

	search(string,character);


	return 0;
}

void search(char *str, char ch)
{
	int i,counter = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(ch == str[i])
			counter++;
	}
	printf("The number of Frequency of character %c is %d\n",ch,counter);
}


