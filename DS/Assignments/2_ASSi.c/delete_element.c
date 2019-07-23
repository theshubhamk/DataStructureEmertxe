#include "common.h"

int delete_element(slist **head, data_t n_data)
{
	slist *temp, *temp1;
	temp = *head;
	temp1 = *head;
	temp1 = temp1->link;
	if(temp == NULL)
	{
		return FAILURE;

	}
	//if(((*head)->link) == NULL)
	{
	//	free(*head);
	//	*head = NULL;
	//	return SUCCESS;
	}
	if((*head)->data == n_data)
	{	
		*head = (*head)->link;
		free(temp);
		return SUCCESS;
	}
	
	while(temp != NULL)
	{
		if(temp1->data == n_data)
		{
			temp->link = temp1->link;
			free(temp1);
		}
		else
		{
			temp = temp->link;
			temp1 = temp1->link;	
		}
		
	}
	return SUCCESS;
	
}