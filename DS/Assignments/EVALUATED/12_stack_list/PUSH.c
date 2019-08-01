#include "common.h"

int PUSH(slist **top, data_t data)
{
	//create node
	slist *new = malloc(sizeof(slist));
	//validation
	if(new == NULL)
	{
		return STACK_OVERFLOW;
	}
	//we create a new node with data and link.
	//since it is gonna be the first node so the link needs to carry the address of next node i.e the old first node which was (pointed by) head.
	new->data = data;
	new->link = *top;
	//since head is still pointing to the old first node we need to reassin head to the new first node.
	*top = new;
	return SUCCESS;	
}
