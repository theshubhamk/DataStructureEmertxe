#include "common.h"

void print(qlist *front)
{	
	//validation if the list empty or not
	if(front == NULL)
	{
		printf("Queue empty\n");
	}
	//else if list elemets exits then print them one by one
	else
	{
		printf("Queue elements exist\n");
		//itirate thru the list
		qlist *temp = front;
		while(temp->link != front)
		{
			printf("%d -----> ",temp->data);
			temp = temp->link;
			//printf("%d-----> ",head->data);
			//head = head->link;
		}
		printf("%d -----> ",temp->data);

	}
}