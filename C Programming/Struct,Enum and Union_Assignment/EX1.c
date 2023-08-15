/*============================================================================================
 * Module : Assignment of Struct,Enum and Union
 *
 * File Name : EX1.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to store information of students using structure.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include<stdio.h>

#define No_of_st 5


typedef struct{
	char Name[20];
	int Marks;
}data;



int main(void)
{
	data st_arr[No_of_st];
	int i;

	for(i = 0; i < No_of_st; i++)
	{
		printf("Enter Student Number %d Name\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%s",(st_arr[i].Name));

		printf("Enter Student Number %d ID\n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&(st_arr[i].Marks));
	}

	for(i = 0; i < No_of_st; i++)
	{
		printf("Student Number %d Name is: %s\n",i+1,st_arr[i].Name);
		fflush(stdin); fflush(stdout);

		printf("Student Number %d ID is: %d\n",i+1,st_arr[i].Marks);
		fflush(stdin); fflush(stdout);

		printf("\n");
	}

	return 0;
}
