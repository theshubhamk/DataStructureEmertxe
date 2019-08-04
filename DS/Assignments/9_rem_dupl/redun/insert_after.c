#include "common.h"

int insert_after(slist **head, data_t n_data, data_t g_data)
{
	//allocate the memory
	slist *temp = *head;
	if(temp == NULL)
	{
		printf("LIST_EMPTY\n"); //LIST_EMPTY;
		return FAILURE;
	}
	//itirate thru the list
	while(temp->data != n_data)
	{
		temp = temp->link;
		if(temp == NULL)
		{
			//printf("Data not found\n");
			return 0;
		}
	}
	//create a new node
	slist *temp1 = malloc(sizeof(slist));
	temp1->data = g_data;
	temp1->link = temp->link;
	//update the link of the previous node to new node
	temp->link = temp1;
	return SUCCESS;
}