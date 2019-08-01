#include "common.h"

void print_dlist(dlist *head)
{
	//check for list empty
	if(head == NULL)
	{
		printf("List empty\n");
	}
	else
	{
		//else itirate and print the elements
		printf("List elements exist\n");
		while(head)
		{
			printf("%d-----> ",head->data);
			head = head->next;
		}

	}
}