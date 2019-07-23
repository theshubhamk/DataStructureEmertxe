#include "common.h"

int find_node(slist *head, data_t data)
{
	int num;
	slist *temp = malloc(sizeof(slist));
	if(head == NULL)
	{
		return FAILURE;
	}
	printf("Enter the node data to find\n");
	scanf("%d",&num);

	temp = head;
	while(temp != NULL)
	{
		if(temp->data == num)
		{
			printf("found\n");
			return SUCCESS;
		}
		temp = temp->link;
	}
	printf("Not found\n");
	//return SUCCESS;
}
