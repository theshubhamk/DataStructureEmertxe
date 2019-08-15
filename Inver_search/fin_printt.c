#include "common.h"

void fin_printt(hash_t *head)
{	
	//validation if the list empty or not
	hash_t *temp;
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
			printf("%s-----> ",temp->word);
			temp = temp->word_link;
		}

	}
}