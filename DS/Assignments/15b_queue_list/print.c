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
		while(front)
		{
			printf("%d -----> ",front->data);
			front = front->link;
			//printf("%d-----> ",head->data);
			//head = head->link;
		}

	}
}