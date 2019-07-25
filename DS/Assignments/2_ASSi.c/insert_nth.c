#include "common.h"

int insert_nth(slist **head, data_t g_data, int n)
{
	//allocate the memory
	slist *temp , *nextTemp;
	slist *temp1 = malloc(sizeof(slist));
	//assign head to temp
	temp = *head;
	nextTemp = *head;
	//use another pointer and move the pointer next to the temp
	nextTemp = nextTemp->link;
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//to add node at the 1st element
	if(n == 1)
	{
		temp1->data = g_data;
		temp1->link = *head;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*head = temp1;
		return SUCCESS;
	}
	//to itirate thru the list and add elements at the required place
	int i;
	for(i = 1;i < (n-1);i++)
	{
		//to check whether the given insertion position is out of the range of number of nodes or not
		if(((temp->link) == NULL))// && ((n-1) > (i+3)))
		{
			printf("Node out of range\n");
			break;//return 0;// OUT_OF_RANGE;
			//exit(0);
		}
		nextTemp = nextTemp->link;
		temp = temp->link;
	}
	//for adding node after the last element
	if((i == (n-1)) && ((temp->link) == NULL))
	{
		temp1->data = g_data;
		temp1->link = NULL;
		//check if the list is empty or not
		//if the head is empty i.e there are no nodes then we assign the temp node to head.
		if(*head == NULL)
		{
			*head = temp1;//this assignment means both the structure and content(i.e link and data is copied in the head node i.e head becomes same as temp)
			return SUCCESS;
		}
		else
		{
			//we create a new pointer i.e basically a node or a node pointer to point at head or to contain head.
			slist *temp2 = *head;
			//we will use this temp1 to transvers thru' the list.
			while(temp2->link != NULL)
			{
				temp2 = temp2->link;
			}
			temp2->link = temp1;//when the temp1 is pointing to the last node after the loop then we simply copy(assign) the temp node that we created earlier to this last node i.e temp1.
			return SUCCESS;
		}
	}
	//create a new node and place it at the given position
	temp1->data = g_data;
	temp1->link = temp->link;
	temp->link = temp1;
	return SUCCESS;
}
