/*============================================================================================
 * Module : Assignment of Struct,Enum and Union
 *
 * File Name : EX2.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to add two systems by using structure.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include<stdio.h>

#define No_of_sys 2


typedef struct{
	int inch;
	float feet;
}system;

int main(void)
{
	system sys1,sys2,total;
	system *arr[No_of_sys] = {&sys1,&sys2};

	for(int i = 0; i < No_of_sys; i++)
	{
		printf("Enter inch distance number %d\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&(arr[i]->inch));

		printf("Enter Feet distance number %d\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&(arr[i]->feet));
	}

	total.inch = sys1.inch + sys2.inch;
	total.feet = sys1.feet + sys2.feet;
	printf("The total inches is %d\nThe total feets is %.2f", total.inch, total.feet);

	return 0;
}