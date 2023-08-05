/*============================================================================================
 * Module : Assignment of Pointers
 *
 * File Name : EX2.c
 *
 * Author: Abdullah Maher Elsayed
 *
 * Description : Write a program in C to print all the alphabets using a pointer.
 *
 * Created on: July 6, 2023
 =============================================================================================*/

#include"stdio.h"

#define NO_OF_ALPH 26

int main(void)
{
	char alph[NO_OF_ALPH] = {'A'};
	int i;

	printf("%c\t",(*alph));

	for(i = 1; i< NO_OF_ALPH; i++)
	{
		(*(alph + i)) = alph[i-1] + 1;
		printf("%c\t",(*alph + i));
	}

	return 0;
}
