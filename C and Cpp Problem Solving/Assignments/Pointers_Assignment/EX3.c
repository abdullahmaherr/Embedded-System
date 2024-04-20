/*============================================================================================
 * Module : Assignment of Pointers
 *
 * File Name : EX3.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to print a string in reverse using a pointer.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include <stdio.h>
#include <string.h>


#define SIZE 50

void reverse(char *str)
{
	int j =  strlen(str) - 1,i;
	char temp;
	for(i = 0; i < j; i++)
	{
		temp = (*(str+i));
		(*(str+i)) = (*(str+j));
		(*(str+j)) = temp;

		j--;
	}
}
int main(void)
{
	char string[SIZE];

	printf("Enter The String\n");
	gets(string);

	printf("string before reverse is %s\n",string);

	reverse(string);

	printf("string After reverse is %s\n",string);

	return 0;
}
