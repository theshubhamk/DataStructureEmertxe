#include "common.h"

int insert_after(slist **head, data_t n_data, data_t g_data)
{
	//decare and allocate memory fo a temporary variable
	slist *temp = *head;
	//validation
	if(temp == NULL)
	{
		printf("LIST_EMPTY\n"); //LIST_EMPTY;
		return FAILURE;
	}
	//traverse thru the list till the given data matches the node data
	while(temp->data != n_data)
	{
		temp = temp->link;
		if(temp == NULL)
		{
			//printf("Data not found\n");
			return DATA_NOT_FOUND;
		}
	}
	//create a node
	slist *temp1 = malloc(sizeof(slist));
	//assign the node structure i.e create a new node
	temp1->data = g_data;
	temp1->link = temp->link;

	temp->link = temp1;
	return SUCCESS;
}