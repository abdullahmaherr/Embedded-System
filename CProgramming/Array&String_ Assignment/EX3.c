/*************************************************************************************************************
 * Project : Assignment of Array & String
 *
 * File Name : EX3.c
 *
 * Author: Abdullah Maher
 *
 * Description :Write a C Function that find transpose of Matrix.
 *
 * Created on: July 6, 2023
 *************************************************************************************************************/
 int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
	fflush(stdin);fflush(stdout);
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
	fflush(stdin);fflush(stdout);

    // Read the matrix elements from the user
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++)
		{
            scanf("%d", &matrix[i][j]);
        }
    }
	   printf("The original matrix is:\n");
	   fflush(stdin);fflush(stdout);

    // Print the original matrix
    for (i = 0; i < rows; i++)
	{
        for (j = 0; j < cols; j++)
		{
            printf("%d\t", matrix[i][j]);
			fflush(stdin);fflush(stdout);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is:\n");
	fflush(stdin);fflush(stdout);

    // Print the transpose of the matrix
    for (i = 0; i < cols; i++)
	{
        for (j = 0; j < rows; j++)
		{
            printf("%d\t", matrix[j][i]);
			fflush(stdin);fflush(stdout);
        }
        printf("\n");
    }

    return 0;
}

 /********************************THIS CODE VALID ONLY IF RAW = COLUMS***************************************************************
 #include<stdio.h>

#define RAWS 3
#define CLOUMS 3

void transpose(int arr[RAWS][CLOUMS]);
int main(void)
{
	int arr[RAWS][CLOUMS];
	int i,j;

	printf("Enter Elements of the First matrix\n");
	for (i = 0; i < RAWS; i++)
	{
		for (j = 0; j < CLOUMS; j++)
		{
			printf("arr[%d][%d] = ",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nThe Elements of the matrix Before Transpose\n");
	for (i = 0; i < RAWS; i++)
	{
		for (j = 0; j < CLOUMS; j++)
		{
			printf("%d\t",arr[i][j]);
			fflush(stdin);fflush(stdout);
		}
		printf("\n");
	}

	transpose(arr);

	printf("\nThe Elements of the matrix After Transpose\n");
	for (i = 0; i < CLOUMS; i++)
	{
		for (j = 0; j < RAWS; j++)
		{
			printf("%d\t",arr[i][j]);
			fflush(stdin);fflush(stdout);
		}
		printf("\n");
	}
}

void transpose(int arr[RAWS][CLOUMS])
{
	int i,j;

	for(i = 0; i < RAWS; i++)
	{
		for(j = 0; j < CLOUMS; j++)
		{
			if(i >= j)
			{
				continue;
			}else
			{
				arr[i][j] = arr[i][j] + arr[j][i];
				arr[j][i] = arr[i][j] - arr[j][i];
				arr[i][j] = arr[i][j] - arr[j][i];
			}
		}
	}
}
***************************************************************************************************************************/