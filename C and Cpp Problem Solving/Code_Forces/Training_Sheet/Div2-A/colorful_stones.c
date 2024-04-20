/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  colorful_stones.c
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
    int i = 0,j = 0;
    char s[50];
    char t[50];

    scanf("%s",s);
    scanf("%s",t);

    while(t[j] != '\0')
    {
        if(s[i] == t[j])
        {
            i++;
        }

        j++;
    }
    printf("%d", i+1);
	return 0;
}

