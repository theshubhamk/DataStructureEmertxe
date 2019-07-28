#include "common.h"

int delete_element(slist **head, data_t n_data)
{
	slist *temp = malloc(sizeof(slist));
	temp = *head;
	slist *temp1 = malloc(sizeof(slist));
	temp1 = *head;
	if(temp == NULL)
	{
		return FAILURE;

	}
	int count = 0;
	while(temp->data != n_data)	
	{
		if(temp == NULL)
		{
			printf("Data not found\n");
			return 0;
		}
		temp = temp->link;
		count++;
	//	temp1 = temp1->link;
	}
	int i = 0;
	while(i < (count-1))
	{
		temp1 = temp1->link;	
	}
	temp1->link = temp->link;

	free(temp);
}