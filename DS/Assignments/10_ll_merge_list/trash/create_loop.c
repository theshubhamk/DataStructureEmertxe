#include "common.h"

int create_loop(slist **head, data_t n_data)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//if only one node is present then link it to itself
	if((*head)->link == NULL)
	{
		(*head)->link = *head;
		return SUCCESS;
	}
	slist *temp = *head;
	//itirate thru the list
	while(temp)
	{
		//if the given data matches the node data
		if(temp->data == n_data)
		{
			//take a temporary pointer to go to the end of list.
			slist *temp1 = *head;
			while(temp1->link)
			{
				temp1 = temp1->link;
			}
			//update the link of end of list which is currently null to the address of the given data node 
			temp1->link = temp;
			return SUCCESS;
		}
		temp = temp->link;
	}
	return DATA_NOT_FOUND;
}