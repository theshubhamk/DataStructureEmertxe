#include "common.h"

int delete_last(slist **head)
{
	int count, i;
	//create node
	slist *temp;
	slist *temp1;
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	temp = *head;
	//create the node
	temp1 = *head;
	temp1 = temp1->link;
	//if only one node is there
	if(((*head)->link) == NULL)
	{
		free(*head);
		*head = NULL;
		return SUCCESS;
	}
	//if more than one nodes are there
	//travesre to the node
	while(temp1->link != NULL)
	{
		temp = temp->link;
		temp1 = temp1->link;
	}
	temp->link = NULL;
	//delete the node
	free(temp1);
	return SUCCESS;
}
