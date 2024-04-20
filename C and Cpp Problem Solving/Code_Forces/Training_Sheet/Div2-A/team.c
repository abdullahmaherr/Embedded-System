/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : team.c
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
	int n,i,x,y,z,count = 0;

	scanf("%d",&n);

	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d", &x,&y,&z);
        count +=  ((x + y + z) >= 2)? 1 : 0;
	}

	printf("%d", count);

	return 0;
}
