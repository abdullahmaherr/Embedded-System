/*************************************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : password_decryption.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARR_PASSWORD_SIZE 100000

void delete_index(char *arr, char index, int length)
{
	int i;
	for (i = index; i < length; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i] = '\0';
}


void swap(char *a,char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}


char *decryptPassword(char *s)
{
	int i,j;
	int length = strlen(s);

	for(i = 0; i < length-1; i++)
	{
		if((s[i] >= 'A') && (s[i] <= 'Z'))
		{
			swap(&s[i],&s[i+1]);
			i++;			//To Pass The Upper Case Character After Swapping
			delete_index(s, i+1, length);
			length = strlen(s);
		}

	}


	for(i = length-1; i >= 0; i--)
	{
		if((s[i] >= '1') && (s[i] <= '9'))
		{
			for(j = 0 ; j < length; j++)
			{
				if(s[j] == '0')
				{
					swap(&s[i],&s[j]);
					delete_index(s,i,length);
					length = strlen(s);
					break;
				}
			}
		}
	}


	return s;
}


int main(void)
{
	char password[ARR_PASSWORD_SIZE];

	gets(password);
	fflush(stdin);fflush(stdout);

	char *originalPassword = decryptPassword(password);
	printf("%s\n", originalPassword);

	return 0;
}
