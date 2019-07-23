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
	temp = *head;
	*head = (*head)->link;
	free(temp);
	return SUCCESS;	
}
