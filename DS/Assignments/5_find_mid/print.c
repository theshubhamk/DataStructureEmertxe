#include "common.h"

void print_slist(slist *head)
{	
	//validation if the list empty or not
	if(head == NULL)
	{
		printf("List empty\n");
	}
	//else if list elemets exits then print them one by one
	else
	{
		printf("List elements exist\n");
		//itirate thru the list
		while(head)
		{
			printf("%d-----> ",head->data);
			head = head->link;
		}

	}
}