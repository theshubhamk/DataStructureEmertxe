#include "common.h"

int POP(s_array *s, data_t *data)
{
	if(isempty(s->top))
	{
		return STACK_UNDERFLOW;
	}
	*data = s->data[s->top];
	(s->top)--;
	return SUCCESS;
}