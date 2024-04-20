/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : simple calculator fun.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C Function that return the addition or subtraction or multiplication or division for two numbers.
 *
 * Created on: feb 22, 2023
 *************************************************************************************************************/
#include <stdio.h>

void callculator(int a,int b,int x)
{

	switch(x)
	{

	case 1:
	    printf("The additions is %d",a+b);
	    break;
	case 2:
		printf("The subtraction is %d",a-b);
		break;
	case 3:
		printf("The multiplication is %d",a*b);
		break;
	case 4:
		printf("The division is %.2f",(float)a/b);
		break;
	default:
		printf("Error, Please enter the right operation\n");
	}
}

int main(void)
{
	int num1,num2,op;
	printf("Enter the numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Enter the operation's number 1 for add, 2 for sub, 3 for mul, 4 for div\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&op);

	callculator(num1,num2,op);

	return 0;
}


