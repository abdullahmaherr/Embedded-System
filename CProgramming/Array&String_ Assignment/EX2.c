/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX2.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that calculate the average by using array.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define SIZE_ARR 10

int main(void)
{
	float arr[SIZE_ARR];
	float var= 0;
	int i;

	for(i = 0; i < SIZE_ARR; i++)
	{
		printf("Enter Number%d = ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);

		var += arr[i];
	}

	printf("The Average of Numbers is %.2f\n",(var/SIZE_ARR));
}
