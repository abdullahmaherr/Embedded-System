/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : check if z can be written as p power q.c
 *
 * Author: Abdullah Maher
 *
 * Description :Given a positive integer z, check if z can be written as p power q, where p and q are positive integers,
   if z can be written as p power q return 1 else return 0.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include<math.h>
int square(int n)
{
	int result =sqrt(n);
	if((result * result) == n)
		return 1;
	else
		return 0;

}

int main(void)
{
	int num,result;
	printf("Enter the number\n");
	scanf("%d",&num);

	result =square(num);
	if(result == 1)
		printf("the number is super square\n");
	else
		printf("the number is not super square\n");

	return 0;
}
