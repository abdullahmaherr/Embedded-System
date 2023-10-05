/***********************************************************************************************
 * Module : Linked List
 *
 * File Name : linked_list.h
 *
 * Author: Abdullah Maher
 *
 * Description : Linked List Header File
 *
 * Created on: Aug 8, 2023
 ************************************************************************************************/
#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "std_types.h"


/*******************************************Configuration******************************************/

/* Enter Your Data (example data of school students )*/
typedef struct{
	uint32_t ID;
	uint8_t NAME[40];
	float32 GRADE;
}data;

/* Linked List Node*/
typedef struct{
	data Student;  /*Depend on The Application*/
	struct node *pNext;
}node;



/*******************************************Function Prototypes******************************************/

/*****************************************************************************************
 * Description :
 * Function that insert linked list node at First
 *
 */
void LINKED_LIST_insertNodeAtFirst();

/*****************************************************************************************
 * Description :
 * Function that insert linked list node at Last
 */
void LINKED_LIST_insertNodeAtLast();


/*****************************************************************************************
 * Description :
 * Function that insert linked list node at any position
 * Takes the position of the node as input
 */
void LINKED_LIST_insertNode(uint32_t position);

/*****************************************************************************************
 * Description :
 * Function that delete Certain Node.
 * Takes the position of the node as input
 */
void LINKED_LIST_deleteNode(uint32_t position);

/*****************************************************************************************
 * Description :
 * Function that delete the all nodes of linked list.
 *
 */
void LINKED_LIST_deleteLinkedList();

/*****************************************************************************************
 * Description :
 * Function that returns the data inside the Nth element from the beginning of linked list
 * Take The Position Of Node ,Return The Address of Certain Node
 */
node* LINKED_LIST_getNthNodeFirst(uint32_t position);

/*****************************************************************************************
 * Description :
 * Function that returns the data inside the Nth element from the end of linked list
 * Take The Position Of Node ,Return The Address of Certain Node
 */
node* LINKED_LIST_getNthNodeLast(uint32_t position);

/*****************************************************************************************
 * Description :
 * Function that returns the data of the middle node in a linked list.
 * if linked list contains only one node return the data inside this node
 *
 */
node* LINKED_LIST_getMiddleNode();

/*****************************************************************************************
 * Description :
 * Function that returns the data of the middle node in a linked list.
 * if linked list contains only one node return the data inside this node
 *
 */
uint32_t LINKED_LIST_LengthLinkedList();

/*****************************************************************************************
 * Description :
 * Function that reverse the all nodes of linked list.
 *
 */
void LINKED_LIST_reverseLinkedList();
/*****************************************************************************************
 * Description :
 * Function that Fill the Data of The Node.
 * Definition of the function depend on the Program
 */
void LINKED_LIST_fillNode(node *pNodeToFill);

/*****************************************************************************************
 * Description :
 * Function that print data of all nodes of linked list.
 * Definition of the function depend on the Program
 */
void LINKED_LIST_printLinkedList();
/*****************************************************************************************
 * Description :
 * Function that print data of Certain node of linked list.
 * Definition of the function depend on the Program
 */
void LINKED_LIST_printNode(node *pNodeToPrint);
/*****************************************************************************************
 * Description :
 * Function that Find data of Certain node of linked list.
 * Definition of the function depend on the Program
 */
uint32_t LINKED_LIST_position(uint32_t id);

#endif /*LINKED_LIST_H_*/
