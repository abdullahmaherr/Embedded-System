/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name :  night_at_the_museum.c
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
	char str[100];
	int i = 0, res = 0;

	scanf("%s",str);

    if(str[i] - 'a' > 13)
    {
        res += (26 - str[i] - 'a');
    }else
    {
        res += (str[i] - 'a');
    }

	while(str[i+1] != '\0')
	{
        if(abs(str[i] - str[i+1]) > 13)
        {
            res += (26 - abs(str[i] - str[i+1]));
        }else
        {
            res += abs(str[i] - str[i+1]);
        }

        i++;
	}

	printf("%d\n",res);

	return 0;
}

