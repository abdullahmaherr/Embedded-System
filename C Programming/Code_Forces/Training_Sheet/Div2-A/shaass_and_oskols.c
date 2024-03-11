/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : shaass_and_oskols.c
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
    int n,i,m;

    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m); 
    int **huntedBird = (int**)malloc(m * sizeof(int*));
    for(i = 0; i < m; i++)
    {
        huntedBird[i] = (int*)malloc(2 * sizeof(int));
        scanf("%d %d", &huntedBird[i][0], &huntedBird[i][1]);
    }
    
    for(i = 0; i < m; i++)
    {
        if(huntedBird[i][0] - 2 >= 0)
            a[huntedBird[i][0] - 2] += huntedBird[i][1] - 1;                            /* Prev Line */
        
        if(huntedBird[i][0] < n)
            a[huntedBird[i][0]] += a[huntedBird[i][0] - 1] - huntedBird[i][1];          /* Next Line */

        a[huntedBird[i][0] - 1] = 0;                                                    /* Curr Line */
    }


    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }


    free(a);
    free(huntedBird);

    return 0;
}
