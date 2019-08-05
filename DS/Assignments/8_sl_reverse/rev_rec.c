#include "common.h"

void rev_rec(slist **head)
{
    slist *first;
    slist *rest;
 
    //validation
    if (*head == NULL)
    {
       return;
    }
 	
    first = *head;
    rest  = first->link;
 
    // List has only one node
    if (rest == NULL)
    {
       return;
    }
    // put the first element on the end of the list
    rev_rec(&rest);
    first->link->link  = first;
 
   //
    first->link  = NULL;
 
    // fix the head pointer
    *head = rest;
}
