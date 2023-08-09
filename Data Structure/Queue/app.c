/**********************************************************************************************
 * Module :
 *
 * File Name : app.c
 *
 * Author: Abdullah Maher
 *
 * Description : application of Queue(FIFO) to Test
 *
 * Created on: Aug 8, 2023
 ***********************************************************************************************/
#include"queue.h"
#include<stdio.h>

#define WIDTH 5

DATA_TYPE_t buffer[WIDTH];  /*Static Allocation to My Buffer*/

void main(void)
{
	QUEUE_buff_t uart_queue;
	DATA_TYPE_t i,temp;

	if(QUEUE_init(&uart_queue, buffer, WIDTH) == QUEUE_NO_ERROR)
		printf("============Queue Initialization Is Done==========\n");


	for(i = 0; i < WIDTH+2; i++)
	{
		printf("Enqueue %x \n",i);
		if(QUEUE_enqueue(&uart_queue, i) == QUEUE_NO_ERROR)
			printf("\t============Enqueue Is Done==========\n");
		else
			printf("\t============Enqueue Is failed==========\n");
	}


	QUEUE_print(&uart_queue);


	if(QUEUE_dequeue(&uart_queue, &temp) == QUEUE_NO_ERROR)
		printf("Dequeue %x \n",temp);

	if(QUEUE_dequeue(&uart_queue, &temp) == QUEUE_NO_ERROR)
			printf("Dequeue %x \n",temp);


	QUEUE_print(&uart_queue);

}
