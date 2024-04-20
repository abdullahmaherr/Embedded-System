/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : word.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char str [100];
    int i = 0,countu = 0,countl = 0;

    scanf(" %s", str);

    while(str[i] != '\0')
    {
        if((str[i]>='a') && (str[i]<='z'))
            countl++;
        else
            countu++;


        i++;
    }

    i = 0;

    if(countl >= countu)
    {
        while(str[i]!='\0')
        {
        str[i] = tolower((char)str[i]);
        i++;
        }
    }
    else
    {
        while(str[i]!='\0')
        {
        str[i] = toupper((char)str[i]);
        i++;
        }
    }

    printf("%s\n", str);

    return 0;

}