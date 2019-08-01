#include "common.h"

int delete_list(dlist **head)
{
	//take one temporary variable
	dlist *temp = *head;
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	while(temp)
	{
		//itirate to the last
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