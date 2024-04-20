/************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : reverse number.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program to reverse a number.
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/


#include <stdio.h>

int main(void)
{
	/*getting number from the user*/
	int num, rev = 0, reminder;
	printf("Enter the number\n");
	scanf("%d",&num);

	/*reverse the number*/
	while(num != 0)
	{
		reminder = num % 10;
		rev = rev * 10 + reminder;
		num /= 10;
	}
	printf("the reversed number is %d",rev);
	return 0;
}
