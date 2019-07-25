#include "common.h"

int insert_before(slist **head, data_t n_data, data_t g_data)
{
	//define and allocate the memory to temp
	slist *temp , *nextTemp;
	slist *temp1 = malloc(sizeof(slist));
	//initialize the temp to head
	temp = *head;
	nextTemp = *head;
	nextTemp = nextTemp->link;
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//inserting at 1st if only one node is present
	if((*head)->data == n_data)
	{
		temp1->data = g_data;
		temp1->link = *head;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*head = temp1;
		return SUCCESS;
	}
	//itirate till the data is not found
	while(nextTemp->data != n_data)
	{
		nextTemp = nextTemp->link;
		temp = temp->link;
		if(nextTemp == NULL)
		{
			//printf("Data not found\n");
			return DATA_NOT_FOUND;
		}
	}
	
	temp1->data = g_data;
	temp1->link = temp->link;
	temp->link = temp1;
	return SUCCESS;
}