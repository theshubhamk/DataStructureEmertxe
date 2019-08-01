#include "common.h"

int delete_last(dlist **head, dlist **tail)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//if more than one nodes are there
	if(((*tail)->prev) != NULL)
	{
		*tail = (*tail)->prev;
		free((*tail)->next);
		(*tail)->next = NULL;
		
	}
	else
	{
		//if only one node is there
		free(*head);
		*head = NULL;
		*tail = NULL;
	}
	return SUCCESS;
}