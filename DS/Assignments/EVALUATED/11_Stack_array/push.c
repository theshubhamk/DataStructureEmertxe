#include "common.h"

int PUSH(s_array *s, data_t data)
{
	//check if the stack is full or not
	if(isfull(s->top))
	{
		return STACK_OVERFLOW;
	}
	//increment the top and store the data
	(s->top)++;
	s->data[s->top] = data;
	return SUCCESS;
}