/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : calculate Fibonacci.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that calculate the Fibonacci series using recursive method.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

static int counter1,counter2 = 2;

void fib(int , int);

int main(void)
{
	int num1 = 0, num2 = 1;

	printf("Enter number of fibonacci numbers you want to display\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&counter1);

	printf("%d\t%d\t",num1,num2);
	fib(num1,num2);

}

void fib(int num1, int num2)
{
	int num3;
	num3 = num1 +num2;
	printf("%d\t",num3);

	counter2++;

	if(counter2 == counter1)
		return;
	else
		fib(num2,num3);
}



/************************************************************************************************

========Write a C Function that calculate the Fibonacci series without using recursive method========

int main (void)
{
	int num1 = 0, num2 = 1, num3, i, counter;

	printf("Enter number of fibonacci numbers you want to display\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&counter);

	printf("%d\t%d\t",num1,num2);

	for(i = 2; i < counter ; i++)
	{
		num3 = num1 + num2;
		printf("%d\t",num3);
		num1 = num2;
		num2 = num3;
	}
}
 ************************************************************************************************/
