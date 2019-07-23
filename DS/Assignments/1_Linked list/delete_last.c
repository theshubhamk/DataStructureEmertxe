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
	temp1 = *head;
	temp1 = temp1->link;
	
	if(((*head)->link) == NULL)
	{
		free(*head);
		*head = NULL;
		return SUCCESS;
	}
	while(temp1->link != NULL)
	{
		temp = temp->link;
		temp1 = temp1->link;
	}
	temp->link = NULL;
	free(temp1);
	return SUCCESS;
}
