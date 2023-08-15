/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX1.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that calculate sum of multidimensional array.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 #include<stdio.h>

#define RAWS 2
#define CLOUMS 2

int main(void)
{
	int matrix1[RAWS][CLOUMS];
	int matrix2[RAWS][CLOUMS];
	int i,j;

	printf("Enter Elements of the First matrix\n");
	for (i = 0; i < RAWS; i++)
	{
		for (j = 0; j < CLOUMS; j++)
		{
			printf("matrix1[%d][%d] = ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix1[i][j]);
		}
	}

	printf("\nEnter Elements of the Second matrix\n");
	for (i = 0; i < RAWS; i++)
	{
		for (j = 0; j < CLOUMS; j++)
		{
			printf(" matrix2[%d][%d] = ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&matrix2[i][j]);
		}
	}

	printf("The Sum of Matrixes is :\n");
	for (i = 0; i < RAWS; i++)
	{
		for (j = 0; j < CLOUMS; j++)
		{
			printf("%d\t",matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
}
