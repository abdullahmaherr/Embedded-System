/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : police_recruits.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,i,sumUntrated = 0, police = 0;

    scanf("%d", &n);

    int *chronological = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d",&chronological[i]);
    }

    for(i = 0; i < n; i++)
    {
        if((chronological[i] < 0) && (police == 0))
        {
            sumUntrated++;
        }else if((chronological[i] < 0) && (police > 0))
        {
            police--;
        }else
        {
            police += chronological[i];
        }
    }

    printf("%d", sumUntrated);
    
	return 0;
}
