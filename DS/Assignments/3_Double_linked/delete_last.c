#include "common.h"

int delete_last(dlist **head, dlist **tail)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	if(((*tail)->prev) != NULL)
	{
		*tail = (*tail)->prev;
		free((*tail)->next);
		(*tail)->next = NULL;
		
	}
	else
	{
		free(*head);
		*head = NULL;
		*tail = NULL;
	}
	return SUCCESS;
}