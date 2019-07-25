#include "common.h"

int delete_first(slist **head)
{
	//create node
	slist *temp = malloc(sizeof(slist));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//reassign the head
	temp = *head;
	*head = (*head)->link;
	//delete the node
	free(temp);
	return SUCCESS;	
}
