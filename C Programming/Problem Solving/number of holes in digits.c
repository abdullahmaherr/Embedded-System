/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : number of holes in digits.c
 *
 * Author: Abdullah Maher
 *
 * Description : The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

int holes(int num)
{
	int counter = 0;
	while(num > 0)
	{
		int hole = num%10;
		switch(hole)
		{
		case 0:
		case 4:
		case 6:
		case 9:
			counter++;
		    break;
		case 8:
			counter += 2;
		    break;
		default:
			break;
		}
		num /= 10;
	}
	return counter;
}


int main(void)
{
	int Number;
	printf("Enter The Number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Number);

	printf("The Number of Holes in the number is %d",holes(Number));

	return 0;
}
