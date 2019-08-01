#include "common.h"

int qiksort(int arr[], int first, int last)
{
	if(first < last)
	{
		int part_index = partition(arr, first, last);
		qiksort(arr, first, part_index - 1);
		qiksort(arr, part_index + 1, last);
	}
	return 1;
}