/*************************************************************************************************************
 * Module : Stack(LIFO)
 *
 * File Name : stack.h
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 8, 2023
 *************************************************************************************************************/
#ifndef STACK_H_
#define STACK_H_

#include "std_types.h"

/*******************************************Configuration******************************************/

/*Selecting The Data Type (uint8,uint16,uint32,.....)*/
#define DATA_TYPE_t uint32_t


/*******************************************Type Definition******************************************/
typedef struct{
	DATA_TYPE_t length;
	DATA_TYPE_t count;
	DATA_TYPE_t *base;
	DATA_TYPE_t *head;
}STACK_buff_t;

typedef enum{
	STACK_NO_ERROR,
	STACK_FULL,
	STACK_EMPTY,
	STACK_NULL
}STACK_status;

/*******************************************API******************************************/

/*
 * Description : Function to Push Data in Stack
 * */
STACK_status STACK_push(STACK_buff_t *stack_buff, DATA_TYPE_t item);

/*
 * Description : Function to Pop Data from Stack
 * */
STACK_status STACK_pop(STACK_buff_t *stack_buff, DATA_TYPE_t *item);


/*
 * Description : Function to Initializing my Stack
 * */
STACK_status STACK_init(STACK_buff_t *stack_buff, DATA_TYPE_t *buff, uint32 length);




#endif /*STACK_H_*/
