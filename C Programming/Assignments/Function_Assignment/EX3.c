/*************************************************************************************************************
 * Project : Assignment of Function
 *
 * File Name : EX3.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Program that Reverse Sentence by using Recursive.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>


void reverse(char *str)
{
	if(*str == '\0')
	{
			return;
	}
	reverse(str+1);
	printf("%c",*str);
}
int main(void)
{
	char string[] = "margorp emosewa";

	printf("The Sentence Before Reverse is %s\n",string);

	printf("The Sentence After Reverse is ");
	reverse(string);

	return 0;
}
