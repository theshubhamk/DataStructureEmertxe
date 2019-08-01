#include "common.h"

int sort_value(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}

	slist *temp, *temp1;
	
	temp = *head;
	temp1 = *head;
	temp1 = temp1->link;
	int tmp_data, flag;
	//use a do while and a flag
	do
	{	
		flag = 0;
		//itirate thru' the loop
		while(temp1)
		{
			if(temp->data > temp1->data)
			{
				//swap the value
				tmp_data = temp->data;
				temp->data = temp1->data;
				temp1->data = tmp_data;
				//while the flag is 1 that is the loop enters this if condition , the loop will continue to run.
				flag = 1;
			}
			temp = temp->link;
			temp1 = temp1->link;
		}
		//reset the pointers for the next itiration
		temp = *head;
		temp1 = *head;
		temp1 = temp1->link;

	}while(flag);
	return SUCCESS;
}