#include "common.h"

int insert_first(dlist **head, dlist **tail, data_t data)
{
	//declare a temp var
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
	//check head is null then insert the new node
	if(*head == NULL)
	{
		*tail == temp;
	}
	//if only one node is present
	if(temp->next != NULL)
	{
		temp->next->prev = temp;
	}
	//assign the head to inserted node
	*head = temp;
	return SUCCESS;
}