#include "common.h"

int insert_sorted(slist **head, data_t data)
{
	if(*head == NULL)
	{
		return insert_at_first(head, data);
	}
	slist *temp1 = *head;
	slist *temp2 = *head;
	temp2 = temp2->link;

	if(temp2 == NULL)
	{
		if(((temp1->data) < data))
		{
			//insert after temp1
			slist *temp = malloc(sizeof(slist));
			//assign the node structure i.e create a new node
			temp->data = data;
			temp->link = NULL;
			temp1->link = temp;
			return SUCCESS;
		}
		else
		{
			//insert before temp1
			slist *new = malloc(sizeof(slist));
			new->link = *head;
			new->data = data;
			*head = new;
			return SUCCESS;
		}
	}

	while(temp2)
	{
	
		if((data < (temp1->data)) && ((temp1->data) == ((*head)->data)))
		{
			//insert before temp1
			slist *new = malloc(sizeof(slist));
			new->link = *head;
			new->data = data;
			*head = new;
			return SUCCESS;	
		}
		else if(((temp1->data) < data) && (data < (temp2->data)))
		{
			//insert after temp1
			slist *temp = malloc(sizeof(slist));
			//assign the node structure i.e create a new node
			temp->data = data;
			temp->link = temp1->link;
			temp1->link = temp;
			return SUCCESS;
		}
		else
		{
			temp2 = temp2->link;
			temp1 = temp1->link;
		}
	}
	if(data > (temp1->data))
	{
		//insert after temp1
		slist *temp = malloc(sizeof(slist));
		//assign the node structure i.e create a new node
		temp->data = data;
		temp->link = NULL;
		temp1->link = temp;
		return SUCCESS;
	}
	return FAILURE;
}