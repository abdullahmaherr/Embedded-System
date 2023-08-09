/*************************************************************************************************************
 * Module : Stack(LIFO)
 *
 * File Name : app.c
 *
 * Author: Abdullah Maher
 *
 * Description : Applicatinon of Stack (LIFO)
 *
 * Created on: Aug 8, 2023
 *************************************************************************************************************/
#include<stdio.h>
#include"stack.h"

/*Creating Buffer*/
#define WIDTH 5

DATA_TYPE_t buffer[WIDTH];  /*Static Allocation to My Buffer*/


void main(void)
{
	DATA_TYPE_t i,temp;
	STACK_buff_t uart_stack;

	STACK_init(&uart_stack,buffer,WIDTH);

	for(i = 0; i < WIDTH; i++)
	{
		if(STACK_push(&uart_stack, i ) == STACK_NO_ERROR)
		{
			printf("UART_STACK_PUSH : %d\n",i);
		}
	}

	for(i = 0; i < WIDTH; i++)
	{
		if(STACK_pop(&uart_stack, &temp) == STACK_NO_ERROR)
		{
			printf("UART_STACK_POP : %d\n",temp);
		}
	}
}
