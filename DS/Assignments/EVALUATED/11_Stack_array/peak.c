#include "common.h"

int PEAK(s_array *s, data_t *data)
{
	//check if the stack is empty or not
	if(isempty(s->top))
	{
		return STACK_UNDERFLOW;
	}
	//fetch the top element from the stack
	*data = s->data[s->top];
	//(s->top)--;
	return SUCCESS;
}