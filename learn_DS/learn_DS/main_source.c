
#include "all_librabries.h"

int main()
{
	printf("Namaskara _/\\_ \n");

	pNode pHead = (pNode)(malloc(sizeof(node)));
	pHead->next = NULL;

	createLinkedList(&pHead);


	return 0;
}