/*============================================================================================
 * Module : Assignment of Pointers
 *
 * File Name : EX4.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to print the elements of an array in reverse order.
 *
 * Created on: July 6, 2023
 =============================================================================================*/
#include <stdio.h>

int main() {

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int length = sizeof(arr) / sizeof(arr[0]);

  int *ptr = &arr[length - 1];

  while (ptr >= arr) {
    printf("%d\t", *ptr);
    ptr--;
  }

  return 0;
}
