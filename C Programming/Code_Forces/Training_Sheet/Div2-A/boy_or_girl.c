/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : boy_or_girl.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <string.h>


int main(void)
{
    char str [100];
    int i,j,n,count = 0;

    scanf("%s", str);

    n = strlen(str);

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++ )
        {
            if(str[i] == str[j])
                count++;
        }
    }

    if(!(count%2))
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");

    return 0;

}