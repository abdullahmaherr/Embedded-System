/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : juicer.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n,b,d,i,sum = 0,count = 0;
    scanf("%d %d %d", &n,&b,&d);

    int *a = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] <= b)
            sum += a[i];
        else
            continue;

        if(sum > d)
        {
            count++;
            sum = 0;
        }
    }

    printf("%d", count);

    return 0;

}