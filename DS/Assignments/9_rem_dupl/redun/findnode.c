#include "common.h"

int find_node(slist *head, data_t data, int num)
{
	//declare the a temp and allocate the memory
	slist *temp = malloc(sizeof(slist));
	//validation
	if(head == NULL)
	{
		return FAILURE;
	}
	//initialize the temp to head
	temp = head;
	//traverse thru the list
	while(temp != NULL)
	{
		////match and print output
		if(temp->data == num)
		{
			//printf("found\n");
			return SUCCESS;
		}
		temp = temp->link;
	}
	//printf("Not found\n");
	return DATA_NOT_FOUND;
}
