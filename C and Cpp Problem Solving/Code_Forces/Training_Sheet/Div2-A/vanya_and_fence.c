/*************************************************************************************************************
 * Project : Code_Forces
 *
 * File Name : vanya_and_fence.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 10, 2023
 *************************************************************************************************************/
 #include <stdio.h>
 #include <stdlib.h>

 int main (void)
 {
    int n,h,result,i;
    
    scanf("%d %d", &n,&h);
    fflush(stdin);fflush(stdout);

    int* a = (int*)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
    	 scanf("%d",&a[i]);
         fflush(stdin);fflush(stdout);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > h)
        {
            result++;
        }

        result++;
    }

    free(a);

    return 0;
 }
