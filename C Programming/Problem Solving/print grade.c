/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Name : print grade.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include<stdio.h>


int main()
{
	int Grade;
	printf("Enter the grade\n");//reading the grade
	scanf("%d",&Grade);

	if(Grade >= 85) //checking the grade
	{
		printf("Exellent\n");
	}
	else if(Grade >= 75)
		{
		printf("Very Good\n");
		}
	else if(Grade >= 65)
		{
		printf("Good\n");
		}
	else if(Grade >= 50)
		{
		printf("PASS\n");
		}
	else if(Grade < 50)
		{
		printf("FALL\n");
		}

	return 0;
}

