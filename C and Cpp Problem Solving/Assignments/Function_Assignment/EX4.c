/*************************************************************************************************************
 * Project : Assignment of Function
 *
 * File Name : EX4.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Program that calculate power of number by using Recursive.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

int power(int n,int pwr)
{
	if(pwr == 1)
	{
		return n;
	}else
	{
		return (n * power(n,(pwr-1)));
	}
}


int main(void)
{
	int num,pwr;
	printf("Please Enter the Number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Please Enter the Power\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pwr);

	printf("The Power of %d is %d\n",num,power(num,pwr));

	return 0;
}
