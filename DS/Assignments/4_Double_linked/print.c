#include "common.h"

void print_dlist(dlist *head)
{
	if(head == NULL)
	{
		printf("List empty\n");
	}
	else
	{
		printf("List elements exist\n");
		while(head)
		{
			printf("%d-----> ",head->data);
			head = head->next;
		}

	}
}