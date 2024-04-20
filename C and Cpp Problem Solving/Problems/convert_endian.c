/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : convert endian
 *
 * Author: Abdullah Maher
 *
 * Description : Write a C function to Convert Little Endian To Big Endian.

 * Created on: Mar 2, 2023
 *************************************************************************************************************/
#include <stdio.h>

unsigned int convert_endian(unsigned int num)
{
	unsigned int res;

	res = ((num & 0xFF000000)>>24)| \
		  ((num & 0x00FF0000)>>8)| \
		  ((num & 0x0000FF00)<<8)| \
		  ((num & 0x000000FF)<<24);

	return res;
}


int main(void)
{
	unsigned int num = 0x4C3D2E1F,res;

	printf("The Number Before Converting is %X\n",num);

	res = convert_endian(num); /*Converting a 32-BIT Unsigned Integer*/

	printf("The Number After Converting is %X\n",res);

}


