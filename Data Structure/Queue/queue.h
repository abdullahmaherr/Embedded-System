/**********************************************************************************************
 * Module :
 *
 * File Name : queue.h
 *
 * Author: Abdullah Maher
 *
 * Description : Queue(FIFO)
 *
 * Created on: Aug 8, 2023
 ***********************************************************************************************/
#ifndef QUEUE_H_
#define QUEUE_H_

#include"std_types.h"

/*******************************************Configuration******************************************/

/*Selecting The Data Type (uint8,uint16,uint32,.....)*/
#define DATA_TYPE_t uint32_t


/*******************************************Type Definition******************************************/
typedef struct{
	DATA_TYPE_t length;
	DATA_TYPE_t count;
	DATA_TYPE_t *base;
	DATA_TYPE_t *head;
	DATA_TYPE_t *tail;
}QUEUE_buff_t;

typedef enum{
	QUEUE_NO_ERROR,QUEUE_FULL,QUEUE_EMPTY,QUEUE_NULL
}QUEUE_status;

/*******************************************API******************************************/

/*
 * Description : Function to Add Data in Queue
 * */
QUEUE_status QUEUE_enqueue(QUEUE_buff_t *queue_buff, DATA_TYPE_t item);


/*
 * Description : Function to Remove Data from Queue
 * */
QUEUE_status QUEUE_dequeue(QUEUE_buff_t *queue_buff, DATA_TYPE_t *item);


/*
 * Description : Function to Initializing my Queue
 * */
QUEUE_status QUEUE_init(QUEUE_buff_t *queue_buff, DATA_TYPE_t *buff, uint32 length);

/*
 * Description : Function to Print my Queue
 * */
void QUEUE_print(QUEUE_buff_t *queue_buff);

#endif /*QUEUE_H_*/
