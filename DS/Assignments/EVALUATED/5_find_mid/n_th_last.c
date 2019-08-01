#include "common.h"

int nth_last(slist **head, data_t *data, int n)
{
	//define a temp var
	slist *temp = malloc(sizeof(slist));
	temp = *head;
	int i;
	slist *temp1 = *head;
	//validation for list empty
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	if(n < 1)
	{
		return FAILURE;
	}
	i = 1;
	//itirate thru the list 
	while(temp1)
	{
		if(i <= n)
		{
			//itirate the first pointer n times from stsrt
			for( ;i <= n;++i)
			{
				if(temp1 == NULL)
				{
					return NOT_ENOUGH_NODES;
					break;
				}
				else
				{
					temp1 = temp1->link;
				}
			}
		}
		else
		{
			return NOT_ENOUGH_NODES;
		}
		//now move both the pointers
		if(temp1 == NULL)
		{
			//return NOT_ENOUGH_NODES;
			break;
		}
		else
		{
			temp1 = temp1->link;	
		}
		temp = temp->link;
	}
	*data = temp->data;
	return SUCCESS;
}