#include "common.h"

int insert_first(dlist **head, dlist **tail, data_t data)
{
	dlist *temp = malloc(sizeof(dlist));
	if(temp == NULL)
	{
		return FAILURE;
	}
	temp->data = data;
	temp->prev = NULL;
	temp->next = *head;

	if(*head == NULL)
	{
		*tail == temp;
	}
	if(temp->next != NULL)
	{
		temp->next->prev = temp;
	}
	*head = temp;
	return SUCCESS;
}