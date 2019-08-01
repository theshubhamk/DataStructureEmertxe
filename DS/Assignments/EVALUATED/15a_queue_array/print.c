#include "common.h"

int print(q_array q)
{
	//check if the array is empty or not
	if(q.rear == -1)
	{
		return Q_EMPTY;
	}
	//assign the rear and front
	int f = q.front;
	int r = q.rear;	
	//if front is less than rear than print the data
	while(f <= r)
	{
		printf("%d\n", q.data[f]);
		(f)++;
	}
	return SUCCESS;
}