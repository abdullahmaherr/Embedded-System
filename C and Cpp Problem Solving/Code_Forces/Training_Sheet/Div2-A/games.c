/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  games.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, res = 0, i,j;

    scanf("%d", &n);

    int ** games = (int **)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
    {
        games[i] = (int *)malloc(2 * sizeof(int));
        scanf("%d %d", &games[i][0], &games[i][1]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(games[i][0] == games[j][1])
            {
                res++;
            }
        }
    }

    free (games);

	printf("%d\n",res);

	return 0;
}

