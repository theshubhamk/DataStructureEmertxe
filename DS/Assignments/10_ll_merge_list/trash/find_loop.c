#include "common.h"

int find_loop(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	if((*head)->link == *head)
	{
		return SUCCESS;
	}
	slist *temp = *head;
	slist *temp1 = *head;
	//move temp1 two blocks ahead
	temp1 = temp1->link;
	if(temp1 == NULL)
	{
		return FAILURE;
	}
	temp1 = temp1->link;

	while(temp1)
	{
		temp1 = temp1->link;
		if(temp1 == NULL)
		{
			return FAILURE;
		}
		temp1 = temp1->link;
		temp = temp->link;
		if(temp->link == temp1->link)
		{
			return SUCCESS;
		}
	}

}