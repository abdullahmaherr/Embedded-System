/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : magnets.c
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
    int n,i, count = 0, res = 0;;
    scanf("%d", &n);

    char* arr = (char*)malloc(sizeof(char) * n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     for(i = 0; i < n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            count++;
        }else
        {
            count = 0;
        }


        if(count > res)
        {
            res = count;
        }
    }


    printf("%d\n",res+1);

    return 0;

}