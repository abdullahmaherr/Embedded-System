/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : concatenate two strings.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a function to concatenate two strings without using strcat function.
 *
 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <string.h>

#define SIZE_ARR 30

void concatenate(char *str1,char *str2);


int main(void)
{
	char string1[SIZE_ARR];
	char string2[SIZE_ARR];

	printf("Enter The String\n");/*Read String1 From User*/
	fflush(stdin); fflush(stdout);
	gets(string1);

	printf("Enter The String\n");/*Read String2 From User*/
	fflush(stdin); fflush(stdout);
	gets(string2);

	printf("The 1st String Before attach is %s\n",string1);
	printf("The 2nd String Before attach is %s\n",string2);

	concatenate(string1,string2);

	printf("The String After attach is %s\n",string1);

	return 0;
}

void concatenate(char *str1,char *str2)
{
	int i,j;

	for(i=0; str1[i]!='\0'; i++); /*to get length of string1*/

	for(j = 0; str2[j] != '\0'; j++,i++)
	{
		str1[i] = str2[j];
	}
	str1[i] = '\0';
}
