/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : nearly_similar_rectangle.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARR_SIDES_SIZE	100000

long nearlySimilarRectangles(int sides_rows, int sides_columns, long **sides)
{
	int i,j;
	long result = 0;

	for(i = 0; i < sides_rows; i++)
	{
		for(j = i+1; j < sides_rows; j++)
		{
			if(((float)sides[i][0]/sides[j][0]) == ((float)sides[i][1]/sides[j][1]))
			{
				result++;
			}
		}
	}

	return result;
}


int main(void)
{
	int i;
	int sides_rows,sides_columns;


	scanf("%d",&sides_rows);
	fflush(stdin);fflush(stdout);

	scanf("%d",&sides_columns);
	fflush(stdin);fflush(stdout);

	long **sides = (long**)malloc(sides_rows * sizeof(long*));
	for(i = 0; i < sides_rows; i++)
	{
		sides[i] = (long*)malloc(sides_columns * sizeof(long));
		scanf("%ld %ld",&sides[i][0],&sides[i][1]);
		fflush(stdin);fflush(stdout);
	}

	long result = nearlySimilarRectangles(sides_rows, sides_columns, sides);

	printf("%ld",result);
	fflush(stdin);fflush(stdout);

	return 0;

}

