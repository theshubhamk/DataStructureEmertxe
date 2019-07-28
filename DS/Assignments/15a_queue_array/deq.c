#include "common.h"

int DEQ(q_array *q, data_t *data)
{
	if(q->front == -1)
	{
		return Q_EMPTY;
	}
	*data = q->data[q->front];
	(q->front)++;
	if(q->front > q->rear)
	{
		q->front = -1;
		q->rear = -1;
	}
	return SUCCESS;
}