/**********************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : username_changes.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: JUL 10, 2023
 **********************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **possibleChanges(int usernames_count, char **usernames, int *result_count)
{
	int i,j,k;
	char **result = (char**)malloc(usernames_count *sizeof(char*));

	for(i = 0; i<usernames_count; i++)
	{
		result[i] = "NO";
	}


	for(i = 0; i<usernames_count; i++)
	{
		for(j = 0; j <= strlen(result[i])-1; j++)
		{
			for(k = j+1; k <= strlen(result[i]); k++)
			{
				if((usernames[i][j] - usernames[i][k]) > 0)
				{
					result[i] = "YES";
					break;
				}
			}
		}
	}


	*result_count = usernames_count;
	return result;
}


int main(void)
{
	int i,usernames_count;

	scanf("%d",&usernames_count);
	fflush(stdin);fflush(stdout);

	char **usernames = (char**)malloc(usernames_count * sizeof(char*));
	for(i = 0; i < usernames_count; i++)
	{
		usernames[i] = (char*)malloc(10 * sizeof(char));
		scanf("%s",usernames[i]);
		fflush(stdin);fflush(stdout);
	}

	int result_count = 0;
	char **result = possibleChanges(usernames_count, usernames, &result_count);

	for(i = 0; i < result_count; i++)
	{
		printf("%s\n",result[i]);
		fflush(stdin);fflush(stdout);
	}

	for(i = 0; i < usernames_count; i++)
	{
		free(usernames);
		free(result);
	}
}
