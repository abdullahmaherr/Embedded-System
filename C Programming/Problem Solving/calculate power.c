/************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : calculate power.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program to calculate the power of a number The number and its power are input from user.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int num,pwr;
	long long value = 1;

	printf("enter the number\n");
	scanf("%d",&num);

	printf("enter the power\n");
	scanf("%d",&pwr);

	/* value = pow(num,pwr); */
	while(pwr != 0)
	{
		value *= num;
		--pwr;
	}
	printf("the value is%lld\n",value);

	return 0;
}
