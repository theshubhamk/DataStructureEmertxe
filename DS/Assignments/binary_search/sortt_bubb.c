#include "common.h"

int bubb_sort(int *arr, int size)
{
	int i, j, temp;
	for(i = 0;i < size - 1;i++)
	{
		//printf("abs%d\n",arr[i] );

		for(j = 0; j < size - 1 - i;j++)
		{
			if(arr[j] > arr[j + 1])
			{	
				//swap
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return 1;
}