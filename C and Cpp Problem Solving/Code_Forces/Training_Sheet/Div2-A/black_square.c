/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : blach_square.c
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
    int i, res = 0;
    int a[4];
    char s[100000];

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        res += a[s[i] - 49];  /* (s[i] - 48) to get the number value of ASCII, then -1 to get index of a[] */
    }

    printf("%d",res);

	return 0;
}
