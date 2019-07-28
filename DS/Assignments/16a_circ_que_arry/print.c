#include "common.h"

int print(cq_array q)
{
	if(q.count == 0)
	{
		return Q_EMPTY;
	}
	int f = q.front;
	int c = q.count;	
	while(c)
	{
		printf("%d\n", q.data[f]);
		f = (f + 1) % SIZE;
		c--;
	}
	return SUCCESS;
}