#include "all_librabries.h"

//void addNode()
//{
//	;
//}

void appendNode(pNode* head, int data)
{
	pNode newNode = (pNode)(malloc(sizeof(node)));
	newNode->data = data;
	newNode->next = NULL;
	pNode pTail = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	while (pTail->next != NULL)
	{
		pTail = pTail->next;
	}
	pTail->next = newNode;
}


void printLList(pNode head)
{
	while (head->next != NULL)
	{
		head = head->next;
		printf("Address of the node: %x, Data:%d\n", head, head->data);
	}
}

void createLinkedList(pNode* head)
{
	int length = 0;
	int data = 0;
	printf("enter the size of the Linked list\n");
	scanf_s(" %d", &length);
	printf("enter the data to be stored in the node\n");
	while (length)
	{
		length--;
		scanf_s(" %d", &data);
		appendNode(head, data);
	}
	printLList(*head);
}


