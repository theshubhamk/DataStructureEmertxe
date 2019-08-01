#include "common.h"

int binary_search_recursive(int *arr, int first, int last, int key)
{
	if(first > last)
	{
		return DATA_NOT_FOUND;
	}
	int mid;
	mid = (first + last) / 2;

	if(arr[mid] == key)
	{
		return SUCCESS;
	}
	else if(arr[mid] < key)
	{
		return binary_search_recursive(arr, mid + 1, last, key);
	}
	else
	{
		return binary_search_recursive(arr, first, mid + 1, key);
	}
}