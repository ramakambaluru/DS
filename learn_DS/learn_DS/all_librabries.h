#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node
{
	int data;
	struct node* next;
}node;

typedef struct node* pNode;

void appendNode(pNode* head, int data);
void printLList(pNode head);
void createLinkedList(pNode* head);
