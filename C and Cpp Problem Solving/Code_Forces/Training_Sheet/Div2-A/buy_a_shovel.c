/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  buy_a_shovel.c
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
    int k,r, i = 1, temp;
    scanf("%d %d", &k, &r);
    
    while(1)
    {
        temp = (i*k)%10;
        
        if((temp == 0) || (temp - r == 0))
        {
            break;
        }

        i++;
    }

    printf("%d", i);

    return 0;
}