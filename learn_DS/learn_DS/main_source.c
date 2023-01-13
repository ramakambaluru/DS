
#include "all_librabries.h"

int main()
{
	int x = 0x80000000;
	int y = x >> 31;
	printf("y = 0x%x\n", y); // y = 0x00000001
	printf("Namaskara _/\\_ \n");
	pNode pHead = NULL;
	pHead = createLinkedList();
	
	reverseLinkedList(&pHead);


	return 0;
}