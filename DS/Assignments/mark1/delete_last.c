#include "common.h"

int delete_last(slist **head)
{
	int count, i;
	//create node
	slist *temp;
	slist *temp1;
	//validation
	if(temp == NULL || temp1 == NULL)
	{
		return FAILURE;
	}
		temp = *head;
		temp1 = *head;
		while(temp != NULL)
		{
			temp = temp->link;
			count++;
		}
		printf("%d\n",count );
		i = 0;
		while(i < (count-2))
		{
			temp1 = temp1->link;
			i++;
		}
		printf("%d\n",i );
		temp = temp1->link;
		temp1->link = NULL;
		free(temp);
		//temp->link = new;
		return SUCCESS;
	//}
}
