/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : check positive.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that check if the number if positive or negative.
 *
 * Created on: feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

/*function checking if the number positive or negative*/

void check(int num)
{
	if(num > 0)
		printf("THE NUMBER IS POSITIVE");
	else if(num < 0)
		printf("THE NUMBER IS NEGATIVE");
	else
		printf("THE NUMBER IS 0");
}

int main(void)
{
	int NUM;
	printf("Enter The Number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&NUM);

	check(NUM);

	return 0;
}
