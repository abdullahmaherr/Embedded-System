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

#define MAXLEN 10000

int main (void)
{
    int i,j,count = 0;
    char arr[MAXLEN];
    scanf("%s", arr);

    for(i = 1; arr[i+2] != '\0'; i+=2 )
    {
        for(j = i+2; arr[j+2] != '\0'; j+=2 )
        {
            if(arr[i] == arr[j])
            {
                count--;
                break;
            }
        }
        count++;
    }

    printf("%d", count);

    return 0;
}