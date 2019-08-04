#include "common.h"

void rev_rec(slist **head)
{
    slist *first;
    slist *rest;
 
    /* empty list */
    if (*head == NULL)
    {
       return;
    }
 	
    first = *head;
    rest  = first->link;
 
    /* List has only one node */
    if (rest == NULL)
    {
       return;
    }
    /* put the first element on the end of the list */
    rev_rec(&rest);
    first->link->link  = first;
 
    /* tricky step */
    first->link  = NULL;
 
    /* fix the head pointer */
    *head = rest;
}

/*
#include "common.h"
void rev_rec(slist *head)
{

    if (head != NULL)
    {
    	slist *temp = *head;
    	printf ("%d ",head->data);
    	rev_rec(head->link);
        
    }
    head->link = temp; 
    //Recursive call first
	//printf ("%d ",head->data);
    //rev_rec(head->link);
    //Print later
    return;
    //printf ("%d ",head->data);
}
*/