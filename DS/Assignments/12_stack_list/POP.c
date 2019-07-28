#include "common.h"

int POP(slist **top, data_t *data)
{
	//create node
	slist *temp = malloc(sizeof(slist));
	temp = *top;
	//validation
	if(temp == NULL)
	{
		return STACK_UNDERFLOW;
	}
	//reassign the head
	*data = (*top)->data;
	*top = (*top)->link;
	//delete the node
	free(temp);
	return SUCCESS;	
}
