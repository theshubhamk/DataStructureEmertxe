#include "common.h"

int delete_list(slist **head)
{
	//create node
	slist *temp = malloc(sizeof(slist));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//while head is not null then keep deleting the elements and keep incrementing the head to the next node.
	while(*head)
	{
		//assign the temp as head i.e store the address of first node
		temp = *head;
		//point the head to the next node i.e link.
		*head = (*head)->link;
		//free the location pointed by temp.
		free(temp);
	}
	return SUCCESS;	
}
