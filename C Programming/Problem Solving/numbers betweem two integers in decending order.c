/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : numbers betweem two integers in decending order.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER. The function takes 2 values (LowerValue and 
  UpperValue), it shall determine the values in between, then arrange the sequence in descending order including the upper and lower values.

 * Created on: Mar 2, 2023
 *************************************************************************************************************/
 #include <stdio.h>

#define SIZE_ARR 50


void find_num(int n1,int n2,int *a)
{
	int i;
	for(i = n2; i >= n1; i--)
	{
		a[n2-i] = i;
	}
}

int main(void)
{
	int i,num1,num2;
	int arr[SIZE_ARR];

	printf("Enter The First Number\n");
	fflush(stdin); fflush(stdout);
	scanf(" %d",&num1);

	printf("Enter The second Number\n");
	fflush(stdin); fflush(stdout);
	scanf(" %d",&num2);

	find_num(num1,num2,arr);

	printf("arr =\t ");
	for(i = 0; i <= (num2 - num1); i++)
	{
		printf("%d\t",arr[i]);
	}

	return 0;
}



