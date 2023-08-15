/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : checks n1 multiple n2.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that reads two integers and checks if the first is multiple of the second.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

void check(int n1,int n2)
{
	if(n1%n2 == 0)
		printf("The First Number is multiple of the second");
	else
		printf("The First Number is not multiple of the second");
}


int main(void)
{
	int num1,num2;
	printf("enter the numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);

	check(num1,num2);

	return 0;
}
