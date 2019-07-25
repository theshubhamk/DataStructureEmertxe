#include "common.h"

int find_mid(slist **head, data_t *data)
{
	slist *temp = malloc(sizeof(slist));
	temp = *head;
	int dat;
	slist *temp1 = *head;
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	while(temp1)
	{
		temp1 = temp1->link;
		if(temp1 == NULL)
		{
			break;
		}
		temp1 = temp1->link;
		temp = temp->link;
	}
	*data = (temp->data);
	return SUCCESS;
}