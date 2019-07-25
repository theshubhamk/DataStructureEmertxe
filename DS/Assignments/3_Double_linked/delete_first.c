#include "common.h"

int delete_first(dlist **head, dlist **tail)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	*head = (*head)->next;
	if(*head != NULL)
	{
		free((*head)->prev);
		(*head)->prev = NULL;
	}
	else
	{
		free(*tail);
		*tail = NULL;
	}
	return SUCCESS;
}