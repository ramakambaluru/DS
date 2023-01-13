#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
	int data;
	struct node* next;
}node;

typedef struct node* pNode;

void appendNode(pNode* head, int data);
void printLList(pNode head);
pNode createLinkedList(void);
void reverseLinkedList(pNode pHead);



int binarySearch(int* sortedArray, int length, int elementToFind);
