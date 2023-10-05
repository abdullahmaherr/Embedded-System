/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : next greater number same digits.c
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function gets number and find the next greater number with same digits.
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/

 #include <stdio.h>
#include <string.h>



void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int find_greater_num_same_digit(int num)
{
	char buff[20];
	int temp,j,i,length = 0;

	/*Convert Number To String*/
	itoa(num,buff,10);

	length = strlen(buff);
    
    /*find the next greater digit to swap */
	for(i = length; i > 0; i--)
	{
		if(buff[i] > buff[i-1])
		{
			temp = i;
			swap(&buff[i],&buff[i-1]);
			break;
		}
	}

    /* arrange the rest of digits ascending */
	for(i = temp; i <= length-1; i++)
	{
		for(j = i + 1; j < length; j++)
		{
			if(buff[i] > buff[j])
			{
				swap(&buff[i],&buff[j]);
			}
		}
	}

	/*Return Number To Integer*/
	temp = atoi(buff);
	return temp;
}

int main(void)
{
	int num,res;

	printf("Enter The Number\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	res = find_greater_num_same_digit(num);

	printf("The Greater Number With Same Digits Is %d\n",res);
	fflush(stdin); fflush(stdout);

	return 0;
}
