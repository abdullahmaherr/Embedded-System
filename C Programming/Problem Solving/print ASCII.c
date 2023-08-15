/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : print ASCII.c
 *
 * Author: Abdullah Maher
 * 
 * Description :  Write a program to print the ASCII value of a character input by the user
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	char value;
	printf("Enter The Character\n");//reading the character
	scanf("%c",&value);

	printf("%d\n",value);//character in ASCII
	return 0;
}

