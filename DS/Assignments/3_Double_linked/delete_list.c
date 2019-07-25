#include "common.h"

int delete_list(dlist **head)
{
	dlist *temp = *head;

	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	while(temp)
	{
		*head = (*head)->next;
		temp = temp->next;
		if(*head != NULL)
		{
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		//else
		{
		//	free(*tail);
		//	*tail = NULL;
		}
	}
	return SUCCESS;
}