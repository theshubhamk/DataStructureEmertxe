#include "common.h"

void print_dlist(dlist *head)
{
	//CHEVK FOR List empty
	if(head == NULL)
	{
		printf("List empty\n");
	}
	else
	{
		//else print the elements
		printf("List elements exist\n");
		while(head)
		{
			printf("%d-----> ",head->data);
			head = head->next;
		}

	}
}