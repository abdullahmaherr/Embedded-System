/**********************************************************************************************
 * Module :
 *
 * File Name : queue.c
 *
 * Author: Abdullah Maher
 *
 * Description : Queue(FIFO)
 *
 * Created on: Aug 8, 2023
 ***********************************************************************************************/
#include"queue.h"
#include<stdio.h>



/*
 * Description : Function to Initializing my Queue
 * */
QUEUE_status QUEUE_init(QUEUE_buff_t *queue_buff, DATA_TYPE_t *buff, uint32 length)
{
	if(buff == NULL_PTR)
	{
		return 	QUEUE_NULL;
	}

	queue_buff->base = buff;
	queue_buff->head = buff;
	queue_buff->tail = buff;
	queue_buff->length = length;
	queue_buff->count = 0;


	return QUEUE_NO_ERROR;
}


/*
 * Description : Function to Add Data in Queue
 * */
QUEUE_status QUEUE_enqueue(QUEUE_buff_t *queue_buff, DATA_TYPE_t item)
{
	if(!(queue_buff->base) || !(queue_buff->head) || !(queue_buff->tail))
	{
		return 	QUEUE_NULL;
	}

	if(queue_buff->count == queue_buff->length)
	{
		return QUEUE_FULL;
	}


	*(queue_buff->head) = item;
	queue_buff->count++;
	if(queue_buff->head == (queue_buff->base + (queue_buff->length * sizeof(DATA_TYPE_t))))
	{
		queue_buff->head = queue_buff->base;
	}
	else
	{
		queue_buff->head++;
	}

	return QUEUE_NO_ERROR;
}


/*
 * Description : Function to Remove Data from Queue
 * */
QUEUE_status QUEUE_dequeue(QUEUE_buff_t *queue_buff, DATA_TYPE_t *item)
{
	if(!(queue_buff->base) || !(queue_buff->head) || !(queue_buff->tail))
	{
		return 	QUEUE_NULL;
	}

	if(queue_buff->count == 0)
	{
		return QUEUE_EMPTY;
	}


	*item = *(queue_buff->tail);
	queue_buff->count--;
	if(queue_buff->tail == (queue_buff->base + (queue_buff->length * sizeof(DATA_TYPE_t))))
	{
		queue_buff->tail = queue_buff->base;
	}
	else
	{
		queue_buff->tail++;
	}


	return QUEUE_NO_ERROR;
}

/*
 * Description : Function to Print my Queue
 * */
void QUEUE_print(QUEUE_buff_t *queue_buff)
{
	DATA_TYPE_t *temp; uint32 i;

	if(queue_buff->count == 0)
	{
		printf("QUEUE IS EMPTY\n");
	}else
	{
		temp = queue_buff->tail;
		printf("====Printing The Queue====\n");
		for(i = 0; i < queue_buff->count; i++,temp++)
		{
			printf("%x\n",*temp);
		}
		printf("==============");
	}
}
