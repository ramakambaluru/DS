#include "all_librabries.h"

int binarySearch(int* sortedArray, int length, int elementToFind)
{
	int low = 0;
	int high = length;
	int mid = (low + high) / 2;

	int array[10] = { 1, 2, 12, 23, 34, 45, 123, 213, 222, 250 };
	while(sortedArray[mid] != elementToFind)
	{
		if (elementToFind > sortedArray[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

		mid = (low + high) / 2;
	}
	return mid;
}
