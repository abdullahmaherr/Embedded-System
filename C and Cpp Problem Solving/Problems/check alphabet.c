/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : check alphabet.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that takes one character and checks if it alphabet or not.
 *
 * Created on: feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

/* function checking if the character uppercase or lowercase*/

void alphabet(char ch)
{
	if(ch >='A'&& ch<='Z')
		printf("the character is capital alphabet");
	else if(ch >='a'&& ch<='z')
		printf("the character is small alphabet");
	else
		printf("the character is not alphabet");
}

int main(void)
{
	char alph;
	printf("Enter the Character\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alph);

	alphabet(alph);

	return 0;
}

