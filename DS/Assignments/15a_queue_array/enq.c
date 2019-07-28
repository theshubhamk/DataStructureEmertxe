#include "common.h"

int ENQ(q_array *q, data_t data)
{
	if(q->rear == (SIZE - 1))
	{
		return Q_FULL;
	}
	if(q->front == -1)
	{
		(q->front)++;
	}
	(q->rear)++;
	q->data[q->rear] = data;
	return SUCCESS;
}