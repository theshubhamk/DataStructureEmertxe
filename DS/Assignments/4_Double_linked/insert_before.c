#include "common.h"

int insert_before(dlist **head, dlist **tail, data_t n_data, data_t g_data)
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
			new_node->next = temp;
			new_node->prev = temp->prev;
			if(temp->prev)
			{
				temp->prev->next = new_node;
			}
			else
			{
				*head = new_node;
			}
			temp->prev = new_node;
			return SUCCESS;
		}
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}
