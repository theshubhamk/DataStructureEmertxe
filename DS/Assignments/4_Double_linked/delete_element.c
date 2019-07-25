#include "common.h"

int delete_element(dlist **head, dlist **tail, data_t n_data)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	dlist *temp = *head;
	while(temp)//->data != n_data)
	{
		if(temp->data == n_data)
		{
			
			if((temp->prev = NULL) && (temp->next = NULL))
			{
				free(*head);
				*head = NULL;
				free(*tail);
				*tail = NULL;
			}
			else if(temp->prev = NULL)//first element
			{
				*head = (*head)->next;
				free((*head)->prev);
				(*head)->prev = NULL;
			}
			/*else if(temp->next = NULL)
			{
				*tail = 
				free(*tail);
				*tail = NULL;
			}*/
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
