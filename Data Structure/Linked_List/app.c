/***********************************************************************************************
 * Module : Linked List
 *
 * File Name : app.c
 *
 * Author: Abdullah Maher
 *
 * Description : Application of Linked List
 *
 * Created on: Aug 8, 2023
 ************************************************************************************************/
#include "linked_list.h"
#include <stdio.h>


int main(void)
{
	uint32 option,position,temp;
	node *TempPtr = NULL_PTR;

	while(1)
	{
		printf("===============================\n");
		printf("Choose One Of The Following Option\n1:Add New Student\n2:Delete Student\n3:View Students\n4:Delete All\n5:View Student Data\n6:Number Of Students\n");
		printf("===============================\n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&option);


		switch(option)
		{
		case 1:                             /*Add New Student*/
			LINKED_LIST_insertNodeAtLast();
			break;
		case 2:                             /*Delete Student*/
			printf("Enter The Student ID\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&temp);

			position = LINKED_LIST_position(temp);
			LINKED_LIST_deleteNode(position);
			break;
		case 3:                              /*View Students*/
			LINKED_LIST_printLinkedList();
			break;
		case 4:                              /*Delete All*/
			LINKED_LIST_deleteLinkedList();
			printf("ALL DATA IS DELETED\n");
			fflush(stdin); fflush(stdout);
			break;
		case 5:                                /*View Student Data*/
			printf("Enter The Student ID\n");
			fflush(stdin); fflush(stdout);
			scanf("%d",&temp);

			position = LINKED_LIST_position(temp);
			TempPtr = LINKED_LIST_getNthNodeFirst(position);
			LINKED_LIST_printNode(TempPtr);
			break;
		case 6:                                 /*Number Of Students*/
			temp =LINKED_LIST_LengthLinkedList();
			printf("The Number Of Students Is %d\n",temp);
			fflush(stdin); fflush(stdout);
			break;
		default:
			printf("Enter The Right Number\n");
			fflush(stdin); fflush(stdout);
			break;
		}
	}
}
