#include "common.h"

int CDEQ(cq_array *q, data_t *data)
{
	//check if the queue is empty
	if(q->count == 0)
	{
		return Q_EMPTY;
	}
	//fetch the data from the queue
	*data = q->data[q->front];
	//increase the front in a circular way.
	q->front = (q->front + 1) % SIZE;
	(q->count)--;
	return SUCCESS;
}