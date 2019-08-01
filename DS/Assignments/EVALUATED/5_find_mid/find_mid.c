#include "common.h"

int find_mid(slist **head, data_t *data)
{
	//declare temp vars
	slist *temp;// = malloc(sizeof(slist));
	temp = *head;
	int dat;
	slist *temp1 = *head;
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//itirate thru the list moving one pointer two times while other one time
	//by the time faster pointer reaches the end the slower pointer will be pointing at the middle value
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