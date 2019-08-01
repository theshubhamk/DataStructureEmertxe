#include "common.h"

int ENQ(qlist **front, data_t data)
{
	//create node
	qlist *new = malloc(sizeof(qlist));
	//validation
	if(new == NULL)// || *front == NULL)
	{
		return Q_EMPTY;
	}
	//we create a new node with data and link.
	//since it is gonna be the first node so the link needs to carry the address of next node i.e the old first node which was (pointed by) head.
	new->data = data;
	new->link = *front;
	//since head is still pointing to the old first node we need to reassin head to the new first node.
	*front = new;
	return SUCCESS;	
}
