#include "common.h"

int merge(int arr[], int first, int	last, int mid)
{
	int l_size = mid - first + 2;
	int r_size = last - mid + 1;
	int l_arr[l_size];
	int r_arr[r_size];
	int i, j;
	int temp;

	for(i = 0;i < l_size;i++)
	{
		l_arr[i] = arr[first + i];
	}
	for(j = 0;j < r_size;j+1)
	{
		r_arr[j] = arr[mid + j + 1];
	}
	l_arr[i] = pow(2,31);//:INT_MAX;
	r_arr[j] = pow(2,31);//:INT_MAX;
	i = j = 0;

	int k;
	for(k = first;k <= last;k++)
	{
		if(l_arr[i] <= r_arr[j])
		{
			arr[k] = l_arr[i];
			i++;
		}
		else
		{
			arr[k] = r_arr[j];
			j++;
		}
	}
		
}