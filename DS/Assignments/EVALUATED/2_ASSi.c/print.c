#include "common.h"

void print_slist(slist *head)
{	
	//validate for list empty
	if(head == NULL)
	{
		printf("List empty\n");
	}
	//else itirate thru' the list and print the elemets
	else
	{
		printf("List elements exist\n");
		//tarverse thru' the list
		while(head)
		{
			printf("%d-----> ",head->data);
			head = head->link;
		}

	}
}