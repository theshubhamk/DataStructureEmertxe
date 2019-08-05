#include "common.h"

void msort(int arr[], int first, int last)
{
	if(first < last)
	{
		int mid = (first + last) / 2;
		msort(arr, first, mid);
		msort(arr, mid + 1, last);
		merge(arr, first, last, mid);
	}
}