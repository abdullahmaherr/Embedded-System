/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : anton_and_danik.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
 #include <stdio.h>

#define MAX_NUM_OF_GAME     100000

int main (void)
  {
    int n,i = 0,ant = 0, dan = 0;
    char String[MAX_NUM_OF_GAME];
    scanf("%d",&n);
    scanf("%S",String);

    while(String[i] != '\0')
    {
        if(String[i] == 'A')
            ant++;
        else if(String[i] == 'D')
            dan++;

        i++;
    }

    if(ant > dan)
        printf("Anton");
    else if(ant < dan)
        printf("Danik");
    else
        printf("Friendship");

    return 0;
  }