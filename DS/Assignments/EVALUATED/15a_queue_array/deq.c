#include "common.h"

int DEQ(q_array *q, data_t *data)
{
	//check of the queue is empty or not
	if(q->front == -1)
	{
		return Q_EMPTY;
	}
	//fetch the data
	*data = q->data[q->front];
	//increment the front
	(q->front)++;
	//if the front is greater than the rear than reassign them both to -1.
	if(q->front > q->rear)
	{
		q->front = -1;
		q->rear = -1;
	}
	return SUCCESS;
}