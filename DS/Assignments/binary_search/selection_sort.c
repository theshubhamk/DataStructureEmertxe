#include "common.h"

int sort_sel(int *arr, int size)
{
	int i, j, minIndex, temp;

	for(i = 0;i < size;i++)
	{
		minIndex = i;
		for (j = i + 1;j < size;j++)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		//swap 
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
	return SUCCESS;
}