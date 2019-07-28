#include "common.h"

int CDEQ(cq_array *q, data_t *data)
{
	if(q->count == 0)
	{
		return Q_EMPTY;
	}
	*data = q->data[q->front];
	q->front = (q->front + 1) % SIZE;
	(q->count)--;
	return SUCCESS;
}