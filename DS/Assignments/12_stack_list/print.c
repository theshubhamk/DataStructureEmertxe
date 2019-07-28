#include "common.h"

void PEEP(slist *top)
{	
	//validation if the list empty or not
	if(top == NULL)
	{
		printf("Stack Underflow\n");
	}
	//else if list elemets exits then print them one by one
	else
	{
		printf("Stack elements exist\n");
		//itirate thru the list
		while(top)
		{
			//printf("%d-----> ",top->data);
			//printf("\t^\n");
			//printf("\t|\n");
			printf("\t\n");
			printf("\t%d\n",top->data);
			top = top->link;
		}

	}
}