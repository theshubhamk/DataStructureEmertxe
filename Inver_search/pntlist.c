#include "common.h"

void printt(slist *head)
{	
	//validation if the list empty or not
	slist *temp;
	temp = head;
	if(head == NULL)
	{
		printf("List empty\n");
	}
	//else if list elemets exits then print them one by one
	else
	{
		//printf("List elements exist\n");
		//itirate thru the list
		while(temp)
		{
			printf("%s-----> ",temp->inp_file_name);
			temp = temp->link;
		}

	}
}