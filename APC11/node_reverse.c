#include "common.h"

int reverse(slist **head)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//assign two pointers
	slist *prevNODE, *currNODE;
	//point the 1st pointer to the head
	prevNODE = *head;
	//move the head to the next node
	*head = (*head)->link;
	//current pointer should also point where trhe head is pointing
	currNODE = *head;
	//make the prev node link as NULL to make it as the last node of the list. this will disconnect it from the rest of the nodes
	prevNODE->link = NULL;

	while(*head)
	{
		//move the head to the next node	
		*head = (*head)->link;
		//link the current node to the prev node
		currNODE->link = prevNODE;
		//now point prev node to current node i.e move it one step forward
		prevNODE = currNODE;
		//point current node to the new head
		currNODE = *head;
	}	
	//finally when we have linked all the elements in reversed order we will then make the final node as head.
	*head = prevNODE;
	return SUCCESS;
}