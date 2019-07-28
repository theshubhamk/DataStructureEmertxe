#include "common.h"

int print(q_array q)
{
	if(q.rear == -1)
	{
		return Q_EMPTY;
	}
	int f = q.front;
	int r = q.rear;	
	while(f <= r)
	{
		printf("%d\n", q.data[f]);
		(f)++;
	}
	return SUCCESS;
}