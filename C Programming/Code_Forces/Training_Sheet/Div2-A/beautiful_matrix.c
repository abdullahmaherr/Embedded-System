/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : beautiful_matrix.c
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


 
int main(void)
{
	int arr[5][5] = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,1,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
	int i,j,res;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(arr[i][j] == 1)
			{
				res = abs(2-i) + abs(2-j); /* (2,2) for rows 0 to 4, colums 0 to 4 */
				break;
			}
		}
	}

	printf("%d", res );

	return 0;
}