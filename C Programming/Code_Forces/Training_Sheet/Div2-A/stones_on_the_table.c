/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : stones_on_the_table.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
#include <stdio.h>

int main(void)
{
	int n, i = 0, count = 0;
	char row[50];
	
	scanf("%d", &n);
	scanf("%s", row);

	while(i < n-1)
	{
		if(row[i] == row[i+1])
		{
			count++;
		}

		i++;
	}

	printf("%d",count);

	return 0;
}
