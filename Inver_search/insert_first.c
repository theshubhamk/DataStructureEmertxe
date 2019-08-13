#include "common.h"

int insert_at_first(slist **head, char_t data)
{
	//create node
	slist *new = malloc(sizeof(slist));
	//validation
	if(new == NULL)
	{
		return FAILURE;
	}
	//we create a new node with data and link.
	//since it is gonna be the first node so the link needs to carry the address of next node i.e the old first node which was (pointed by) head.
	new->inp_file_name = data;
	new->link = *head;
	//since head is still pointing to the old first node we need to reassin head to the new first node.
	*head = new;
	return SUCCESS;	
}
