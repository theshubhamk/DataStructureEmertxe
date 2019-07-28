#include "common.h"

int insert_at_last(slist **head, data_t data)
{
	//create node
	slist *temp = malloc(sizeof(slist));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//update node values i.e we are making a node with data and link. since its gonna be the last node so we assign the link value as NULL
	temp->data = data;
	temp->link = NULL;
	//check if the list is empty or not
	//if the head is empty i.e there are no nodes then we assign the temp node to head.
	if(*head == NULL)
	{
		*head = temp;//this assignment means both the structure and content(i.e link and data is copied in the head node i.e head becomes same as temp)
		return SUCCESS;
	}
	else
	{
		slist *temp1 = *head;//we create a new pointer i.e basically a node or a node pointer to point at head or to contain head.
		//we will use this temp1 to transvers thru' the list.
		while(temp1->link != NULL)
		{
			temp1 = temp1->link;
		}
		temp1->link = temp;//when the temp1 is pointing to the last node after the loop then we simply copy(assign) the temp node that we created earlier to this last node i.e temp1.
		return SUCCESS;
	}

}