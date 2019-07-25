#include "common.h"

int nth_last(slist **head, data_t *data, int n)
{
	slist *temp = malloc(sizeof(slist));
	temp = *head;
	int i;
	slist *temp1 = *head;
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	i = 1;
	while(temp1)
	{
		if(i <= n)
		{
			for( ;i <= n;++i)
			{
				if(temp1 == NULL)
				{
					break;
				}
				else
				{
					temp1 = temp1->link;
				}
			}
		}
		if(temp1 == NULL)
		{
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