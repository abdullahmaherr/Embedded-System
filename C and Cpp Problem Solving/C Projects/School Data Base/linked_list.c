/***********************************************************************************************
 * Module : Linked List
 *
 * File Name : linked_list.c
 *
 * Author: Abdullah Maher
 *
 * Description : Linked List Source File
 ************************************************************************************************/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

node *gpHead = NULL_PTR;               /*The Head of Linked List*/

void LINKED_LIST_insertNodeAtFirst()
{
	node *pNewNode;
	/*Check if the Linked List Is Empty*/
	if(gpHead == NULL_PTR)
	{
		/*Allocate Memory For The New Node*/
		if((pNewNode = (node*)malloc(sizeof(node))) != NULL_PTR)
		{
			/*Assign The New Node To Head*/
			gpHead = pNewNode;
			pNewNode->pNext = NULL_PTR;
		}

	}else/* if the Linked List Is Not Empty*/
	{
		/*Allocate Memory For The New Node*/
		if((pNewNode = (node*)malloc(sizeof(node))) != NULL_PTR)
		{
			/*Assign The New Node To Head*/
			pNewNode->pNext = gpHead;
			gpHead = pNewNode;
		}
	}
	/*Fill TheData of The New Node */
	LINKED_LIST_fillNode(pNewNode);
}

void LINKED_LIST_insertNodeAtLast()
{
	node *pNewNode;
	node *pLastNode;
	/*Check if the Linked List Is Empty*/
	if(gpHead == NULL_PTR)
	{
		/*Allocate Memory For The New Node*/
		if((pNewNode = (node*)malloc(sizeof(node))) != NULL_PTR)
		{
			/*Assign The New Node To Head*/
			gpHead = pNewNode;
			pNewNode->pNext = NULL_PTR;
		}

	}else/* if the Linked List Is Not Empty*/
	{
		/* Navigate until get to last node*/
		pLastNode = gpHead;
		while(pLastNode->pNext)
		{
			pLastNode = pLastNode->pNext;
		}

		/*Allocate Memory For The New Node*/
		if((pNewNode = (node*)malloc(sizeof(node))) != NULL_PTR)
		{
			/*Assign The New Node at Last*/
			pLastNode->pNext = pNewNode;
			pNewNode->pNext = NULL_PTR;
		}
	}

	/*Fill TheData of The New Node */
	LINKED_LIST_fillNode(pNewNode);
}

void LINKED_LIST_insertNode(uint32_t position)
{
	node *pNewNode;
	node *pPrevious;           /*Pointer To The Previous Node*/
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	/*Check If Number is Valid*/
	if((position < 0) || ((position > LINKED_LIST_LengthLinkedList())))
	{
		printf("Invalid Index Number");
		fflush(stdin); fflush(stdout);
		return;
	}

	if(position == 0)
	{
		LINKED_LIST_insertNodeAtFirst();

	}else
	{
		/* Navigate until get to the certain position*/
		while(position>count)
		{
			pPrevious = pCurrent;
			pCurrent = pCurrent->pNext;
			count++;
		}

		/*Allocate Memory For The New Node*/
		if((pNewNode = (node*)malloc(sizeof(node))) != NULL_PTR)
		{
			/*Assign The New Node at Nth Position*/
			pPrevious->pNext = pNewNode;
			pNewNode->pNext = pCurrent;

		}
	}

	/*Fill TheData of The New Node */
	LINKED_LIST_fillNode(pNewNode);
}

void LINKED_LIST_deleteNode(uint32_t position)
{
	node *pPrevious;           /*Pointer To The Previous Node*/
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	/*Check If Number is Valid*/
	if((position < 0) || ((position > LINKED_LIST_LengthLinkedList())))
	{
		printf("Invalid Index Number");
		fflush(stdin); fflush(stdout);
		return;
	}

	if(position == 0)
	{
		gpHead = gpHead->pNext;
		free(pCurrent);
		return;
	}

	/* Navigate until get to the certain position*/
	while(position>count)
	{
		pPrevious = pCurrent;
		pCurrent = pCurrent->pNext;
		count++;
	}

	/*Deleting The Certain Position*/
	pPrevious->pNext = pCurrent->pNext;
	free(pCurrent);
}

void LINKED_LIST_deleteLinkedList()
{
	node *pPrevious;           /*Pointer To The Previous Node*/
	node *pCurrent = gpHead;   /*Pointer To The Current Node*/

	/* Navigate until get to the last position*/
	while(pCurrent)
	{
		pPrevious = pCurrent;
		pCurrent = pCurrent->pNext;
		free(pPrevious);
	}
	gpHead = NULL;
}

node* LINKED_LIST_getNthNodeFirst(uint32_t position)
{
	node *pCurrent = gpHead;   /*Pointer To The Current Node*/
	uint32_t count = 0;

	/*Check If Number is Valid*/
	if((position < 0) || ((position > LINKED_LIST_LengthLinkedList())))
	{
		printf("Invalid Index Number");
		fflush(stdin); fflush(stdout);
		return NULL_PTR;
	}

	/* Navigate until get to the certain node*/
	while(position > count)
	{
		pCurrent = pCurrent->pNext;
		count++;
	}

	return pCurrent;
}

node* LINKED_LIST_getNthNodeLast(uint32_t position)
{
	node *pPrevious = gpHead;           /*Pointer To The Previous Node*/
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	/* Navigate until get to the certain node*/
	while(pCurrent->pNext)
	{
		pCurrent = pCurrent->pNext;
		if(position <=  count)
		{
			pPrevious = pPrevious->pNext;
		}
		count++;
	}

	return pPrevious;
}

node* LINKED_LIST_getMiddleNode()
{
	node *pPrevious = gpHead;           /*Pointer To The Previous Node*/
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	/*check if the list is empty*/
	if(gpHead==NULL)
	{
		printf("Empty Linked List \n");
		return NULL_PTR;
	}

	/* Navigate until get to the certain node*/
	while(pCurrent->pNext)
	{
		pCurrent = pCurrent->pNext;
		count++;
		if(count == 2)
		{
			pPrevious = pPrevious->pNext;
			count = 0;
		}

	}

	return pPrevious;
}

uint32_t LINKED_LIST_LengthLinkedList()
{
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t length = 0;

	/* Navigate until get to the certain node*/
	while(pCurrent)
	{
		pCurrent = pCurrent->pNext;
		length++;
	}
	return length;
}

void LINKED_LIST_reverseLinkedList()
{
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	node *pPrevious =  pCurrent;          /*Pointer To The Previous Node*/
	node *pSubsequent;   /*Pointer To The Subsequent Node*/

	pCurrent = pCurrent->pNext;
	pPrevious->pNext = NULL_PTR;       /* Set The Null Of Linked List*/
	pSubsequent = pCurrent->pNext;

	/* Navigate until reverse the linked list*/
	while(pCurrent->pNext)
	{
		pCurrent->pNext = pPrevious;
		pPrevious = pCurrent;
		pCurrent = pSubsequent;
		pSubsequent = pSubsequent->pNext;
	}

	pCurrent->pNext = pPrevious; /*reverse last node */
	gpHead = pCurrent;
}

void LINKED_LIST_fillNode(node *pNodeToFill)/*This Function Depend on the Application*/
{
	uint8_t temp[40];

	printf("Enter The Student ID : ");
	fflush(stdin); fflush(stdout);
	gets(temp);
	pNodeToFill->Student.ID = atoi(temp);

	printf("\nEnter The Student Name : ");
	fflush(stdin); fflush(stdout);
	gets(pNodeToFill->Student.NAME);

	printf("\nEnter The Student Grade : ");
	fflush(stdin); fflush(stdout);
	gets(temp);
	pNodeToFill->Student.GRADE = atof(temp);

	LINKED_LIST_printNode(pNodeToFill);
}

void LINKED_LIST_printLinkedList()/*This Function Depend on the Application*/
{
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	if(gpHead == NULL_PTR)
	{
		printf("Data Is Not Found\n");
		fflush(stdin); fflush(stdout);
		return;
	}

	/* Navigate until Print Each Node*/
	while(pCurrent)
	{
		printf("===============================\n");
		printf("The Student Number %d \n ",count+1);
		fflush(stdin); fflush(stdout);
		LINKED_LIST_printNode(pCurrent);
		count++;
		pCurrent = pCurrent->pNext;
	}
}

void LINKED_LIST_printNode(node *pNodeToPrint)/*This Function Depend on the Application*/
{
	if(pNodeToPrint == NULL_PTR)
	{
		printf("Data Is Not Found\n");
		fflush(stdin); fflush(stdout);
		return;
	}

	printf("\nThe Id Of Student is %d \n",pNodeToPrint->Student.ID);
	fflush(stdin); fflush(stdout);
	printf("The Name Of Student is %s \n",pNodeToPrint->Student.NAME);
	fflush(stdin); fflush(stdout);
	printf("The Grade Of Student is %.2f \n",pNodeToPrint->Student.GRADE);
	fflush(stdin); fflush(stdout);
	printf("===============================");
	fflush(stdin); fflush(stdout);

}

uint32_t LINKED_LIST_position(uint32_t id)/*This Function Depend on the Application*/
{
	node *pCurrent = gpHead;            /*Pointer To The Current Node*/
	uint32_t count = 0;

	while(pCurrent)
	{
		if(pCurrent->Student.ID == id)
		{
			return count;
		}
		pCurrent = pCurrent->pNext;
		count++;
	}
}
