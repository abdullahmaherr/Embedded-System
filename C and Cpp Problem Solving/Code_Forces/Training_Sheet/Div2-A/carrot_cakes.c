/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  carrot_cakes.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y)? (x): (y))

int main(void)
{
    int i,n,t,k,d;
    scanf("%d %d %d %d",&n,&t,&k,&d);

    int g = (n + k-1)/k;

    int t1 = 0, t2 = d;
    for( i = 0; i < g; i++)
    {
        if(t1 <= t2)
            t1 += t;
        else
            t2 += t;
    }

    if((g*t) > MAX(t1,t2))
        printf("YES");
    else
        printf("NO");
}