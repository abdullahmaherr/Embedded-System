/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : sereja_and_dema.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>


int main (void)
{
    int n,i = 0,dema_res = 0, sereja_res = 0, left, right;
    scanf("%d",&n);

    int* arr =(int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    left = 0;
    right = n-1;

    while(left <= right)
    {
        if(arr[right] > arr[left])
        {
            if(!(i%2))
                sereja_res += arr[right];
            else
                dema_res += arr[right];

            right--;
        }else
        {
            if(!(i%2))
                sereja_res += arr[left];
            else
                dema_res += arr[left];
            
            left++;
        }

        i++;
    }

    printf("%d %d", sereja_res, dema_res);

    return 0;
}