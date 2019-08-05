#include "common.h"

int pali(slist **head)
{
	//validation
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	int count = 0;
	//define temp vars
	slist *start, *last, *temp;
	temp = *head;
	start = *head;
	last = *head;
	int tmp_data;
	//run the loop to count the elements
	while(temp)
	{
		temp = temp->link;
		count++;
	}
	//if only one element is there then no need to reverse
	if(count < 2)
	{
		return SUCCESS;
	}
	//itirate upto the half of the count i.e half of the total no. of elements
	int i, run = (count / 2) + 1;
	while(run)
	{
		//go to the last of the list to fetch the last element
		last = *head;
		for(i = 1;i < count;i++)
		{
			//while(last)
			{
				last = last->link;
			}
		}
		//once that element is fetched , reitirate and go to its previous element. this we achieve by decrementing the count afer every itiration
		count--;
		//swap the data till both the last and start pointers meet at the center
		/*if(last->link != start)
		{
			//swap data
			tmp_data = start->data;
			start->data = last->data;
			last->data = tmp_data;
		}*/
		//start comparing the last and first node data.
		if(last->data == start->data)
		{
			//increment start pointer starting from the head
			start = start->link;	
		}
		else
		{
			return FAILURE;
		}
		
		//decrement the count for the while loop termination
		run--;
	}
	return SUCCESS;

}