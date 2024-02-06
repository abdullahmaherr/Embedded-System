/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : petya_and_strings.c
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
#include <ctype.h>


int main (void)
{
	char str1[100];
	char str2[100];
	int i = 0;

	scanf("%s",str1);
	scanf("%s",str2);

	while(str1[i] != '\0')
	{
		str1[i] = tolower((char)str1[i]);
		str2[i] = tolower((char)str2[i]);

		i++;
	}

	int res = strcmp(str1,str2);

	printf("%d\n",res);

	return 0;
}

