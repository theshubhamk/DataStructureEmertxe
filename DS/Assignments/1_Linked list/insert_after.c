#include "common.h"

int insert_after(slist **head, data_t n_data, data_t g_data)
{
	slist *temp = *head;
	if(temp == NULL)
	{
		printf("LIST_EMPTY\n"); //LIST_EMPTY;
		return FAILURE;
	}
	while(temp->data != n_data)
	{
		temp = temp->link;
		if(temp == NULL)
		{
			printf("Data not found\n");
			return 0;
		}
	}
	slist *temp1 = malloc(sizeof(slist));
	temp1->data = g_data;
	temp1->link = temp->link;
	temp->link = temp1;
	return SUCCESS;
}