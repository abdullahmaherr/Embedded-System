/*************************************************************************************************************
 * Project : Code Forces
 *
 * File Name : bear_and_big.c
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
    int a,b,i = 0;

    scanf("%d %d", &a,&b);

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        i++;
    }

    printf("%d",i);

    return 0;
 }