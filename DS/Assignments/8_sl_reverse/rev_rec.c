/*#include "common.h"

void rev_rec(slist **head)
{	
	//assign two pointers
	slist *prevNODE, *currNODE;
	if((*head)->link->link == NULL)
	{
		//point the 1st pointer to the head
		prevNODE = *head;
		//move the head to the next node
		*head = (*head)->link;
		//current pointer should also point where trhe head is pointing
		currNODE = *head;
		//make the prev node link as NULL to make it as the last node of the list. this will disconnect it from the rest of the nodes
		prevNODE->link = NULL;	
		return SUCCESS;
	}
	
	//move the head to the next node	
	*head = (*head)->link;
	//link the current node to the prev node
	currNODE->link = prevNODE;
	//now point prev node to current node i.e move it one step forward
	prevNODE = currNODE;
	//point current node to the new head
	currNODE = *head;
	*head = prevNODE;
	rev_rec(head);*/
	/*
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
	}*/	
	//finally when we have linked all the elements in reversed order we will then make the final node as head.
	
	//return SUCCESS;
//}

#include "common.h"

int *rev_rec(slist **head)
{
	slist *first, *second, *revHead;

	first = *head;
	second = (*head)->link;
	//validation
	if(first == NULL)
	{
		return NULL;
	}
	if(second == NULL)
	{
		return first;
	}
	first->link = NULL;
	revHead = rev_rec(second);
	second->link = first;

	return revHead;
}
