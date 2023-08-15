/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name :frequency of character in string.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a function that prints the frequency of a certain character in a string.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

#define SIZE_ARR 30

void freq(char *a,char character);

int main(void)
{
	char string[SIZE_ARR];
	char character;

	printf("Enter The String\n");/*Read String From User*/
	fflush(stdin); fflush(stdout);
	gets(string);

	printf("Enter The Character\n");/*Read Character From User*/
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);

	freq(string,character);

}

void freq(char *a,char character)
{
	int i,count = 0;

	for(i = 0; a[i] != '\0'; i++)
	{
		if(character == a[i])
			count++;
	}
	printf("The number of frequency of character %c at %s is\t%d",character,a,count);
}


