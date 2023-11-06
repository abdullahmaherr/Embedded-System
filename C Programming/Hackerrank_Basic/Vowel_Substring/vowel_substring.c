/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : vowel_substring.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_STRING_SIZE 200000



char *findSubstring(char *s, int k)
{
	int i,j,count = 0,length = 0;
	static char result[ARR_STRING_SIZE] = "Not Found";
	char arr[ARR_STRING_SIZE] = {0};

	for(i = 0; i < (strlen(s)-k+1); i++)
	{
		for(j = i; j < k+i; j++)
		{
			if(s[j] == 'a' || s[j] == 'o' || s[j] == 'i' || s[j] == 'e' ||  s[j] == 'u')
			{
				count++;
			}
			arr[j-i] = s[j];
		}
		arr[j] = '\0';

		if(count > length)
		{
			strcpy(result,arr);
			length = count;
		}
		count = 0;
	}

	return result;
}



int main(void)
{
	char *result = NULL;
	char string[ARR_STRING_SIZE];
	int k = 0;

	scanf("%s",string);
	fflush(stdin);fflush(stdout);

	scanf("%d",&k);
	fflush(stdin);fflush(stdout);

	result = findSubstring(string,k);

	printf("%s\n",result);
}
