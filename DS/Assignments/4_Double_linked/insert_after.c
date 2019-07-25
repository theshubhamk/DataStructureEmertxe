#include "common.h"

int insert_after(dlist **head, dlist **tail, data_t n_data, data_t g_data)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	dlist *temp = *head;
	dlist *new_node = malloc(sizeof(dlist));
	while(temp)
	{
		if(temp->data == n_data)
		{
			new_node->data = g_data;
			new_node->prev = temp;
			new_node->next = temp->next;
			if(temp->next)
			{
				temp->next->prev = new_node;
			}
			else
			{
				*tail = new_node;
			}
			temp->next = new_node;
			return SUCCESS;
		}
		temp = temp->next;
	}
	return DATA_NOT_FOUND;	
}
