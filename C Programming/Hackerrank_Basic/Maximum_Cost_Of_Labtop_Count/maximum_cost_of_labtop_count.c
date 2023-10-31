/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : maximum_cost_of_labtop_count.c
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

#define ARR_COST_SIZE	100000

int maxCost(int cost_count, int *cost, int labels_count, char **labels, int dailyCount)
{
	int i,count = 0,result = 0,max = 0;

	for(i = 0; i < cost_count; i++)
	{
		if(!(strcmp(labels[i], "legal")))
		{
			count++;
		}

		result += cost[i];

		if(count == dailyCount)
		{
			if(max < result)
			{
				max = result;
			}
			result = 0;
			count = 0;
		}
	}

	return max;
}



int main(void)
{
	int i,cost_count,labels_count,dailyCount,result = 0;
	int cost[ARR_COST_SIZE];



	scanf("%d",&cost_count);
	fflush(stdin);fflush(stdout);

	for(i = 0; i < cost_count; i++)
	{
		scanf("%d",&cost[i]);
		fflush(stdin);fflush(stdout);
	}

	scanf("%d",&labels_count);
	fflush(stdin);fflush(stdout);

	char **labels = (char**)malloc(labels_count * sizeof(char*));
	for(i = 0; i < cost_count; i++)
	{
		labels[i] = (char*)malloc(9 * sizeof(char));
		scanf("%9s",labels[i]);
		fflush(stdin);fflush(stdout);
	}

	scanf("%d",&dailyCount);
	fflush(stdin);fflush(stdout);

	result = maxCost(cost_count, cost, labels_count, labels, dailyCount);

	printf("%d",result);
	fflush(stdin);fflush(stdout);

	return 0;
}
