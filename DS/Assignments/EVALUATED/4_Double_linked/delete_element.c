#include "common.h"

int delete_element(dlist **head, dlist **tail, data_t n_data)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	dlist *temp = *head;
	//itirate thru the list
	while(temp)
	{
		//if the data matches the node data
		if(temp->data == n_data)
		{
			//if only one element is there then he below condition
			if((temp->prev == NULL) && (temp->next == NULL))
			{
				free(*head);
				*head = NULL;
				free(*tail);
				*tail = NULL;
			}
			//if more than onoe node is there then to delete the 1st element
		    else if(temp->prev == NULL)
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
				free(temp);
				temp = NULL;
			}
			//to delete the last element
			else if(temp->next == NULL)
			{
				*tail = temp->prev;
				(*tail)->next = NULL;
				free(temp);
				temp = NULL;
			}
			//to delete any of the elements beteen 1st and last
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				temp = NULL;
			}
			return SUCCESS;
		}
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}
