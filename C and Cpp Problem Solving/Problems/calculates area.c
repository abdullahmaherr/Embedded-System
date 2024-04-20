/*************************************************************************************************************
 * Project : Problem Solving
 * 
 * File Nmae : calculates area.c
 *
 * Author: Abdullah Maher
 * 
 * Description : Write a program that reads the radius of a circle and calculates the area and circumference
 * 
 * Created on: Feb 1, 2023
 *************************************************************************************************************/
#include <stdio.h>


int main()
{
	float rad;
	printf("Enter The Rad of The Circle\n"); //Reading the rad
	scanf("%f",&rad);

	printf("the circumference is %.2f\n",2 * rad * 22/7); //the circumference

	printf("the area is %.2f\n",rad * rad * 22/7); // the Area

	return 0;
}

