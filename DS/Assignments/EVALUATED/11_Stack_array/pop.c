#include "common.h"

int POP(s_array *s, data_t *data)
{
	//check if the stack is empty
	if(isempty(s->top))
	{
		return STACK_UNDERFLOW;
	}
	//fetch the data and decrement the top pointer
	*data = s->data[s->top];
	(s->top)--;
	return SUCCESS;
}