#include "common.h"

int del_max(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	if(((*head)->link) == NULL)
	{
		free(*head);
		*head = NULL;
		return SUCCESS;
	}
	slist *temp, *biggest, *remp, *mark, *prev;
	temp = *head;
	remp = temp;
	temp = temp->link;
	biggest = *head;
	//biggest = biggest->link;
	while(temp)
	{
		//biggest = temp;
		if(biggest->data < temp->data)
		{
			
			biggest = temp;
			prev = remp;	
			//if(temp->link)
			{	
				remp = temp;
				temp = temp->link;
			}
			//mark = temp;
		}
		else
		{
			remp = temp;
			temp = temp->link;
		}
	}
	printf("%d\n",biggest->data);
	if(biggest->link)
	{
		biggest->data = biggest->link->data;
		biggest->link = biggest->link->link;
	}
	else
	{
		
		//mark = remp->link;
		prev->link = NULL;
		//biggest = NULL;
		free(biggest);
		//free(temp);
	}
	return SUCCESS;
}