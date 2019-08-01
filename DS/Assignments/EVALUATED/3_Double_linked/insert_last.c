#include "common.h"

int insert_last(dlist **head, dlist **tail, data_t data)
{
	//define a temp var
	dlist *temp = malloc(sizeof(dlist));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//create a node
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