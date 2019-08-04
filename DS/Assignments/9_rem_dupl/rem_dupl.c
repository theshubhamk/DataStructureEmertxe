#include "common.h"

int rem_dupl(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	//initialize 
	slist *temp, *temp1;
	temp = *head;
	slist *remp;
	//run an outer loop to compare each value one by one to other elements
	while(temp)
	{
		//start another pointer to start the run from the value the temp is pointing at and compare each value to temp's value.
		temp1 = temp;
		//run another pointer remp along with temp1 but it should always be pointing to previus node of temp1	
		remp = temp1;
		temp1 = temp1->link;	
		//check whether the temp1 is null or not.
		while(temp1)
		{
			//check if the data matches or not , if matches then delete the node . 
			if(temp->data == temp1->data)
			{
				//this is to store next elements address and delete the element.
				remp->link = temp1->link;
				free(temp1);
				//once the element is deleted. we killed the temp1 in order to delete the element.
				//the below line revives the temp1 and makes it pount to the next node.
				temp1 = remp->link;
			}
			else
			{
				if(temp1)
				{
					//if the data doesnt match then we will be moving the remp to temp1's place and temp1 to the the next node.
					remp = temp1;
					temp1 = temp1->link;	
				}
			}
		}
		temp = temp->link;
	}
	return SUCCESS;
}