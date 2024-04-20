/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : Determine sum integer floor.c
 *
 * Author: Abdullah Maher
 *
 * Description : write a function to add two floating numbers.Determine the integer floor of the sum.
 * The floor is the truncated float value, anything after the decimal point is dropped.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>
int add_float(float,float);

int main(void)
{
	float x = 3.3, y = 4.4;

	int z = add_float(x,y);
	printf("sum is %d",z);

	return 0;
}

int add_float(int a,int b)
{
	 return (a + b);
}
