/**********************************************************************************************
 * Project : Hackerrank Basic
 *
 * File Name : string_anagram.c
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



void countCharfreq(int *arr, const char *str)
{
	while(*str)
	{
		arr[*str - 'a']++;
		str++;
	}
}


void stringAnagram(char** dictionary, int dictionaryCount,char** query, int queryCount)
{

	int i,j,k,temp = 0;
	int *result = (int*)calloc(queryCount,sizeof(int));


	int **dictionCharFreq = (int**)malloc(dictionaryCount * sizeof(int*));
	for(i = 0; i < dictionaryCount; i++)
	{
		dictionCharFreq[i] = (int*)calloc(26,sizeof(int));
		countCharfreq(dictionCharFreq[i], dictionary[i]); /* Calculate Frequency of each character in the strings */
	}


	int **queryCharFreq = (int**)malloc(queryCount * sizeof(int*));
	for(i = 0; i < queryCount; i++)
	{
		queryCharFreq[i] = (int*)calloc(26,sizeof(int));
		countCharfreq(queryCharFreq[i], query[i]);	/* Calculate Frequency of each character in the strings */
	}



	for(i = 0; i<queryCount; i++)
	{
		temp = strlen(query[i]);

		for(j = 0; j<dictionaryCount; j++)
		{
			if(temp == strlen(dictionary[j]))
			{
				for(k = 0; k <26; k++)
				{
					if(dictionCharFreq[j][k] != queryCharFreq[i][k])/* Compare Frequency of each character in the strings */
					{
						break;
					}
				}

				if(k == 26)
				{
					result[i]++;
				}
			}
		}
	}




	for(i = 0; i < queryCount; i++)
	{
		printf("%d\n",result[i]);
	}
}


int main(void)
{
	int i,dictionaryCount,queryCount;


	scanf("%d", &dictionaryCount);
	fflush(stdin);fflush(stdout);

	char** dictionary = (char**)malloc( dictionaryCount * sizeof(char*));
	for (i = 0; i < dictionaryCount; i++)
	{
		dictionary[i] = (char*)malloc( 16 * sizeof(char));
		scanf("%15s", dictionary[i]);
		fflush(stdin);fflush(stdout);
	}


	scanf("%d", &queryCount);
	fflush(stdin);fflush(stdout);

	char** query = (char**)malloc( queryCount * sizeof(char*));
	for (i = 0; i < queryCount; i++)
	{
		query[i] = (char*)malloc( 16 * sizeof(char));
		scanf("%15s", query[i]);
		fflush(stdin);fflush(stdout);
	}

	stringAnagram(dictionary,dictionaryCount,query,queryCount);
}

