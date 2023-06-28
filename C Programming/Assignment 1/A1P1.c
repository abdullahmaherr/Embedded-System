/*
 * A1P1.c
 *
 *  Created on: Feb 1, 2023
 *      Author: abdullah
 */
#include <stdio.h>


int main()
{
	int num1, num2, result;
	printf("Enter first Number\n");
	scanf("%d",&num1);
	printf("Enter second Number\n");
	scanf("%d",&num2);
	result = ((num1 + num2) * 3) - 10;
	printf("The Result is %d\n",result);
	return 0;
}

