/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : gravity_flip.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n, int* arr)
{
    int i,value,hole;

    for(i = 1; i<n; i++)
    {
        value = arr[i];
        hole = i;
        while((hole > 0) && (arr[hole-1] > value))
        {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
}


int main(void)
{
    int n,i;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(n,arr);

    for(i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}