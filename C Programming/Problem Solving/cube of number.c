/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : cube of number.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that prints the cube of any number.
 *
 * Created on: feb 22, 2023
 *************************************************************************************************************/
#include<stdio.h>

int cube(int a)
{
	return (a*a*a);
}

int main(void)
{
	int num,result;
	printf("Enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	result = cube(num);
	printf("The cube is %d",result);

	return 0;

}
