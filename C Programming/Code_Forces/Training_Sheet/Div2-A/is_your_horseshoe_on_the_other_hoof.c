/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  is_your_horseshoe_on_the_other_hoof.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}

int main (void)
{
    int i, res = 0;
    unsigned int arr[4];
    scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);

    qsort(arr,4 ,sizeof(int), cmp);

    for(i = 0; i < 3; i++)
    {
        if(arr[i] == arr[i+1])
        {
            res++;
        }
    }

    printf("%d", res);
	return 0;
}

