/*************************************************************************************************************
 * Module : Stack(LIFO)
 *
 * File Name : stack.c
 *
 * Author: Abdullah Maher
 *
 * Description :
 *
 * Created on: Aug 8, 2023
 *************************************************************************************************************/
#include "stack.h"


STACK_status STACK_push(STACK_buff_t *stack_buff, DATA_TYPE_t item)
{
	/*Checking Stack is Valid*/
	if(!(stack_buff->base) || !(stack_buff->head))
		return STACK_NULL;

	/*Checking Stack is Full*/
	if((stack_buff->count) == (stack_buff->length))
		return STACK_FULL;

	/*Push Item in Stack*/
	*(stack_buff->head) = item;
	stack_buff->head++;
	stack_buff->count++;

	return STACK_NO_ERROR;
}

STACK_status STACK_pop(STACK_buff_t *stack_buff, DATA_TYPE_t *item)
{
	/*Checking Stack is Valid*/
	if(!(stack_buff->base) || !(stack_buff->head))
		return STACK_NULL;

	/*Checking Stack is Empty*/
	if((stack_buff->count) == 0)
		return STACK_EMPTY;

	/*Pop Item from Stack*/
	stack_buff->head--;
	*item = *(stack_buff->head);
	stack_buff->count--;

	return STACK_NO_ERROR;
}

STACK_status STACK_init(STACK_buff_t *stack_buff, DATA_TYPE_t *buff, DATA_TYPE_t length)
{
	if(buff == NULL_PTR)
	{
		return STACK_NULL;
	}

	/*Initializing Stack*/
	stack_buff->base = buff;
	stack_buff->head = buff;
	stack_buff->length = length;
	stack_buff->count = 0;

	return STACK_NO_ERROR;
}
