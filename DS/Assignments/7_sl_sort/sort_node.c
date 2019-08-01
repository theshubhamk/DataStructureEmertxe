#include "common.h"

int sort_node(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	slist *temp, *temp1, *temp2;
	
	temp = *head;//0
	temp1 = *head;//1
	
	temp1 = temp1->link;
	int tmp_data, flag;
	//use a do while and a flag
	do
	{	
		flag = 0;
		//itirate thru' the loop
		while(temp1->link != NULL)
		{

			if(temp->data > temp1->data)
			{
				if(temp->link == (*head)->link)	
				{
					//a temp node
					slist *tmp = temp1->link;
					temp1->link = temp;
					temp->link = tmp;

					*head = temp1;
					flag = 1;
				}
				else
				{
					temp->link = temp1->link;
					slist *tmp = temp1->link->link->link;
					temp1->link->link = temp1;
					temp1->link = tmp;
					flag = 1;
				}
			}
			
			if(temp1->link == NULL)
			{
				flag = 0;
				break;
			}
			else
			{
				temp1 = temp1->link;
			} 
			temp = temp->link;		
		}
		//reset the pointers for the next itiration
		temp = *head;//0
		temp1 = *head;//1
		temp1 = temp1->link;

	}while(flag);
	return SUCCESS;
}