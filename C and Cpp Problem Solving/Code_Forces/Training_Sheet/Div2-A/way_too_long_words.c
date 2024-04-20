/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : anton_and_letters.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main (void)
{
    int n,i,temp = 0;
    scanf("%d", &n);

    char **words = (char**)malloc(n * sizeof(char*));
    for(i = 0; i < n; i++)
    {
        words[i] = (char*)malloc(100 * sizeof(char));
        scanf(" %s",&words[i]);
    }

    for(i = 0; i < n; i++)
    {
        temp = strlen(words[i]);
        
        if(temp <= 10)
        {
            puts(words[i]);
        }else
        {
            printf("%c%d%c\n",words[i][0],temp-2,words[i][temp - 1]);
        }
    }

    return 0;
}