#include "common.h"

int delete_element(slist **head, data_t n_data)
{
	//declare and allocate the memory for temp
	slist *temp, *temp1;
	temp = *head;
	temp1 = *head;
	temp1 = temp1->link;
	//validation
	if(temp == NULL)
	{
		return FAILURE;

	}
	//for deletion if the data matches at the start 
	if((*head)->data == n_data)
	{	
		*head = (*head)->link;
		free(temp);
		return SUCCESS;
	}
	//traverse thru the list
	while(temp != NULL)
	{
		//check for the data match
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