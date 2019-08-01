#include "common.h"

int ENQ(q_array *q, data_t data)
{
	//check for queue is full or not
	if(q->rear == (SIZE - 1))
	{
		return Q_FULL;
	}
	//increment the front onr time to point to zeroth element.
	if(q->front == -1)
	{
		(q->front)++;
	}
	(q->rear)++;
	//store the data 
	q->data[q->rear] = data;
	return SUCCESS;
}