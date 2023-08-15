/*============================================================================================
 * Module : Assignment of Struct,Enum and Union
 *
 * File Name : EX5.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to calculate area of circle by using Macros.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
 #include<stdio.h>

#define PI 3.1415
#define AREA_OF_CIRCLE(RAD) ((PI)*(RAD)*(RAD))

 int main(void)
 {
    float rad;

    printf("Enter the Radius of the circle\n");
    scanf("%f",&rad);

    printf("The Area of the circle is %.2f\n",AREA_OF_CIRCLE(rad));

    return 0;
 }
