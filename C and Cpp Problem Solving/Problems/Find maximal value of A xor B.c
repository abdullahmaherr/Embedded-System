/*************************************************************************************************************
 * Project :Problem Solving
 *
 * File Name :Find maximal value of A xor B.c
 *
 * Author: Abdullah Maher
 *
 * Description :Given two integers: L and R, Find the maximal value of A xor B
 * where A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/

#include<stdio.h>

int max(int n1,int n2)
{
	int i,max = 0;

	for(i = n1; i <= n2; i++)
	{
		if((n1 ^ i) > max)
		{
			max = (n1 ^ i);
		}
	}
	return max;
}

int main (void)
{
	int num1,num2,result;

	do{
	printf("Enter The Numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	}while((num1 < 1) || (num2 > 1000));

	result = max(num1,num2);
	printf("the max is %d",result);

	return 0;

}
