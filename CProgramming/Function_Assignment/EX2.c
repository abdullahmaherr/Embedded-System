/*************************************************************************************************************
 * Project : Assignment of Function
 *
 * File Name : EX2.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that calculate factorial by recursive.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

long long factorial(int num)
{
	if(num == 1)
	{
		return 1;
	}else
	{
		return (num * factorial(num-1));
	}
}

int main(void)
{
	int num;
	printf("Please enter the number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("The Factorial of %d is %ld\n",num,factorial(num));

	return 0;
}
