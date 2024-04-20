/*************************************************************************************************************
 * Project : Assignment of Function
 *
 * File Name : EX1.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that display Prime Numbers between Intervals by Making user Function.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
#include <stdio.h>

void find(int n1, int n2)
{
	int i,j,counter = 0;
	printf("The prime numbers between %d and %d are\n",n1,n2);

	for(i = n1; i <= n2; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				counter++;
			}
		}
		if(counter == 2)
			printf("%d\t",i);
		else
			counter = 0;
	}
}

int main(void)
{
	int num1,num2;
	printf("Please enter the two numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);

	find(num1,num2);

	return 0;
}

