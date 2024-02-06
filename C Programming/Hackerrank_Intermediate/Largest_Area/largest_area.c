/*************************************************************************************************************
 * Project : Hackerrank Intermdiate
 *
 * File Name : Largest_area.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

long* getMaxArea(int w, int h, int isVertical_count, int *isVertical, int distance_count, int *distance, int* result_count)
{
 	*result_count = isVertical_count;
	long *result = (long *)malloc(isVertical_count * sizeof(long));


    return result;
}


int main(void)
{
    int w, h, isVertical_count, distance_count;

    scanf("%d",&w); 
    scanf("%d",&h);

    scanf("%d",&isVertical_count);
    int* isVeritcal = (int*)malloc( isVertical_count * sizeof(int) );
    for(int i = 0; i < isVertical_count; i++)
    {
        scanf("%d",&isVeritcal[i]);
    }

    scanf("%d",&distance_count);
    int* distance = (int*)malloc( distance_count * sizeof(int) );
    for(int i = 0; i < distance_count; i++)
    {
        scanf("%d",&distance[i]);
    }

    int result_count;
    long* result  = getMaxArea( w, h, isVertical_count, isVertical, distance_count, distance , &result_count);
    for(int i = 0; i < result_count; i++)
    {
        printf("%d\n",result[i]);
    }

    free(isVeritcal);
    free(distance);

    return 0;
}