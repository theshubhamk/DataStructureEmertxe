#include "common.h"

int delete_first(dlist **head, dlist **tail)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//move the head to the next node
	*head = (*head)->next;
	//for no nodes
	if(*head != NULL)
	{
		free((*head)->prev);
		(*head)->prev = NULL;
	}
	else
	{
		//if only one node is there
		free(*tail);
		*tail = NULL;
	}
	return SUCCESS;
}