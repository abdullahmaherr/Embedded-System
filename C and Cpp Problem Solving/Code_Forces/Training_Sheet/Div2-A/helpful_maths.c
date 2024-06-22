/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : helpful_maths.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
 #include <stdio.h>
 #include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int main (void)
{
    int i,index = 0;
    char str[100];
    char buff[100];
    
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '+')
            continue;
        else
            buff[index++] = str[i];
    }

    qsort(buff, index, sizeof(char), compare);

    for(i = 0; i < index; i++)
    {
        printf("%c",buff[i]);
        if(i < index-1)
            printf("+");
    }

    return 0;
}