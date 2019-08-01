#include "common.h"

int binary_search(int *arr, int size, int key)
{
	bubb_sort(arr,size);
	int i;
	for(i = 0;i < size;i++)
	{
		printf("%d\n",*(arr + i));
	}
	int first = 0, last = size - 1, mid;
	while(first <= last)
	{
		mid = (first + last) / 2;
		if(arr[mid] == key)
		{
			return SUCCESS;
		}
		else if(arr[mid] < key)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}
	return DATA_NOT_FOUND; 
}	