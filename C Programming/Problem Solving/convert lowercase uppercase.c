/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : convert lowercase uppercase.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write C Function that converts the any letter from lowercase to uppercase.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

char change(char lower)
{
	return (lower - 32);
}


int main (void)
{
	char low;

	do{
	printf("Enter the lowercase character\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&low);
	}while(low < 'a' || low > 'z');

	printf("the uppercase character is %c\n",change(low));
	return 0;
}
