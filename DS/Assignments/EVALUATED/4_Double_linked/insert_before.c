#include "common.h"

int insert_before(dlist **head, dlist **tail, data_t n_data, data_t g_data)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//declare a temp var
	dlist *temp = *head;
	dlist *new_node = malloc(sizeof(dlist));
	//itirate thru the loop
	while(temp)
	{
		//compare and find the data
		if(temp->data == n_data)
		{
			//if data matches then create a node.
			new_node->data = g_data;
			new_node->next = temp;
			new_node->prev = temp->prev;
			//to insert in  between
			if(temp->prev)
			{
				temp->prev->next = new_node;
			}
			//if we are inserting before the first node
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
