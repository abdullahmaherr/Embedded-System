/*============================================================================================
 * Module : Assignment of Pointers
 *
 * File Name : EX1.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to demonstrate how to handle the pointers in the program.
 *
 * Created on: July 6, 2023
 =============================================================================================*/

#include"stdio.h"


int main(void)
{
	int m = 29;
	int *ab;

	printf("Address of m %p\n Value of m %d\n",&m,m);

	ab = &m;
	printf("Address of Pointer ab is %p\n Content of ab %d\n",&ab,*ab);

	m = 34;
	printf("Address of Pointer ab is %p\n Content of ab %d\n",&ab,*ab);

	*ab = 7;
	printf("Address of m is %p\n Value of m %d\n",&m,m);

	return 0;
}
