/*************************************************************************************************************
 * Project : Code Forces
 *
 * File Name : night_at_the_museum.c
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
	int i = 0, counter = 0;
	char current = 'a';
	char str[100];

	scanf("%s",str);

	while(str[i] != '\0')
	{
		if((abs(current - str[i])) > 13)
		{
			counter += (26 - (abs(current - str[i])));
		}else
		{
			counter += (abs(current - str[i]));
		}

		current = str[i];
		i++;
	}

	printf("%d\n",counter);

	return 0;
}