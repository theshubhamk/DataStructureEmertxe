#include "common.h"

int insert_last(dlist **head, dlist **tail, data_t data)
{
	dlist *temp = malloc(sizeof(dlist));
	if(temp == NULL)
	{
		return FAILURE;
	}
	temp->data = data;
	temp->next = NULL;
	temp->prev = *tail;
	if(*head == NULL)
	{
		*head = temp;
	}
	if(*tail != NULL)
	{
		temp->prev->next = temp;
	}
	*tail = temp;
	return SUCCESS;
}