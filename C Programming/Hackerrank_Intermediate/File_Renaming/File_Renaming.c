/*************************************************************************************************************
 * Project : Hackerrank Intermdiate
 *
 * File Name : File_Renaming.c
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


#define SIZE_OF_OLD_NAME    100000
#define SIZE_OF_NEW_NAME    100000

#define MODULO              1000000007

int renameFile(char* oldName, char* newName) 
{
    int i,j,k, count = 0;
    int n = strlen(oldName);

    for(i = 0; i < n-2; i++)
    {
        if(oldName[i] == newName[0])
        {
             for(j = i+1; j < n-1; j++)
            {
                if(oldName[j] == newName[1])
                {
                     for(k = j+1; k < n; k++)
                    {
                        if(oldName[k] == newName[2])
                        {
                            count++;            
                        }
                    }
                }
            }
        }
    }

    return (count % MODULO);
}


int main(void)
{
    int result;
    char oldName[SIZE_OF_OLD_NAME];
    char newName[SIZE_OF_NEW_NAME];         /*   TO BE NOTED THE SOLUTION IS VALID ONLY IF THE NEWNAME IS 3 CHARACTERS LONG ONLY   */


    scanf("%s %s" ,newName, oldName);

    result = renameFile(oldName,newName);

    printf("%d",result);

    return 0;
}