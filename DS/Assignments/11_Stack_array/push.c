#include "common.h"

int PUSH(s_array *s, data_t data)
{
	if(isfull(s->top))
	{
		return STACK_OVERFLOW;
	}
	(s->top)++;
	s->data[s->top] = data;
	return SUCCESS;
}