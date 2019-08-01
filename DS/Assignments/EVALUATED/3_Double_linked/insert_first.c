#include "common.h"

int insert_first(dlist **head, dlist **tail, data_t data)
{
	//define one temp var
	dlist *temp = malloc(sizeof(dlist));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//create a node
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