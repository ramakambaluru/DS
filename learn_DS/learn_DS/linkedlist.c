#include "all_librabries.h"
#include <stdbool.h>

//void addNode()
//{
//	;
//}

void appendNode(pNode *pHead, int data)
{

}


void printLList(pNode head)
{
	if (head != NULL)
	{
		printf("Address of the node: %x, Data:%d\n", head, head->data);
		printLList(head->next);
	}
}

pNode createLinkedList(void)
{
	int length = 0;
	int data = 0;
	pNode pHead = NULL;

	printf("enter the size of the Linked list\n");
	scanf_s(" %d", &length);

	if (length)
	{
		printf("enter the data to be stored in the node\n");
		scanf_s(" %d", &data);

		pHead = (pNode)(malloc(sizeof(node)));
		pHead->data = data;
		pHead->next = NULL;
		pNode pTemp = pHead;
		while (length - 1)
		{
			scanf_s(" %d", &data);
			pTemp->next = (pNode)(malloc(sizeof(node)));
			pTemp = pTemp->next;
			pTemp->data = data;
			length--;
		}
		pTemp->next = NULL;
		printLList(pHead);
	}

	return pHead;
}


void reverseLinkedList(pNode* pHead)
{
	pNode current = *pHead;
	pNode prev = NULL;
	pNode next = NULL;

	while (current != NULL)
	{
		next = current->next; //Move next to next node
		current->next = prev; //reverse the link
		prev = current; //Move prev to next node
		current = next; //Move current to next node
	}
		*pHead =prev;
	printf("The reversed list is:\n");
	printLList(*pHead);

}


bool detectLoop(pNode* pHead)
{
	pNode pSlow = pHead;
	pNode pFast = pHead;
	bool result = false;
	
	while (pSlow && pFast && pFast->next)
	{
		pSlow = pSlow->next;
		pFast = pFast->next->next;
		if (pFast == pSlow)
		{

			result = true;
			break;
		}
	}
	return result;
}


