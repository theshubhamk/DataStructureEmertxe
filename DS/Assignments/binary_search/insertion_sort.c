#include "common.h"

int sort_ins(int *arr, int size)
{
	int value, hole, i;
	for(i = 0;i < size;i++)
	{
		value = arr[i];
		hole = i;
		while(hole > 0 && arr[hole - 1] > value)
		{
			arr[hole] = arr[hole - 1];
			hole = hole - 1;
		}
		arr[hole] = value;
	}
	return SUCCESS;
}