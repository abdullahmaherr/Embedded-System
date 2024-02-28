/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  die_roll.c
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
    int i,j, greater = 0;

    scanf("%d %d",&i, &j);

    greater = i>j ? i : j;

    greater = (6-greater)+1;

    switch(greater)
    {
        case 0: printf("0/1"); break;
        case 1: printf("1/6"); break;
        case 2: printf("1/3"); break;
        case 3: printf("1/2"); break;
        case 4: printf("2/3"); break;
        case 5: printf("5/6"); break;
        case 6: printf("1/1"); break;
    }

	return 0;
}

