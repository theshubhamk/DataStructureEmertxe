#include "common.h"

int print(cq_array q)
{
	//check for queue empty
	if(q.count == 0)
	{
		return Q_EMPTY;
	}
	//define front and count
	int f = q.front;
	int c = q.count;	
	//itirate the count number of times and the each element of the array
	while(c)
	{
		printf("%d\n", q.data[f]);
		f = (f + 1) % SIZE;
		c--;
	}
	return SUCCESS;
}