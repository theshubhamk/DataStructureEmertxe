#include "common.h"

int CENQ(cq_array *q, data_t data)
{
	//we define a count and check if the count has reached the size or not.
	if(q->count == SIZE)
	{
		return Q_FULL;//if it has then return full
	}
	//increase the front one time if its -1
	if(q->front == -1)
	{
		(q->front)++;
	}
	//increase the rear in a circular way using the modulus.
	q->rear = (q->rear + 1) % SIZE;
	q->data[q->rear] = data;
	(q->count)++;
	return SUCCESS;
}