/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : check number is power of 2 .c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function that check if number is power of 2 or not.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

void pwr(int num)
{
	int var = num & (num-1);

	if(var == 0)
		printf("the number %d is power of 2",num);
	else
		printf("the number %d is not power of 2",num);
}


int main(void)
{
	int number;
	printf("Enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	pwr(number);

	return 0;
}
