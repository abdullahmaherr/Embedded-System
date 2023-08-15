/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : check even_odd.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function to check if the input is an even number or an odd number,
 * if even number return 0 if odd number return 1.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

int check(int a)
{
	int z;
	if(a%2 == 0)
		z = 0;
	else
		z = 1;
	return z;
}

int main(void)
{
	int num;
	printf("enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("%d",check(num));
	return 0;
}
