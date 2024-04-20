/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : calculates required heater.c
 *
 * Author: Abdullah Maher
 *
 * Description :  Write a C function that calculates the required heater activation time according to the input temperature of water.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

int heater(int temp)
{
	if((temp>0) & (temp<=30))
		return 7;
	else if((temp>30) & (temp<=60))
		return 5;
	else if((temp>60) & (temp<=90))
		return 3;
	else if((temp>90) & (temp<100))
		return 1;
	else
		return 0;
}

int main(void)
{
	int Temp;
	printf("Enter the temp\n");
	scanf("%d",&Temp);

	printf("The Required Time is %d Minutes",heater(Temp));

	return 0;
}
