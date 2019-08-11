#include "common.h"

int merge_list(slist **headnum1, slist **headnum2, slist **headsum)
{
	//validation
	if(*headnum2 == NULL && *headnum1 == NULL)
	{
		return LIST_EMPTY;
	}
	slist *temp1, *temp2, *temp3;
	temp1 = *headnum1;
	temp2 = *headnum2;
	temp3 = *headsum;
	//if only one list exists
	if(temp1 == NULL && temp2 != NULL)
	{
		*headsum = *headnum2;
		return SUCCESS;
		
	}
	if(temp2 == NULL && temp1 != NULL)
	{
		*headsum = *headnum1;
		return SUCCESS;
		
	}
	//else travesr thru the list
	while(temp1 && temp2)
	{
		//if both the list have more than one elements
		if((temp1->link != NULL) && (temp2->link != NULL))
		{
			insert_sorted(headsum,temp1->data);
			insert_sorted(headsum,temp2->data);
			temp1 = temp1->link;
			temp2 = temp2->link;
		}
		//if 2nd list has more elements than the 1st
		else if((temp1->link == NULL) && (temp2->link != NULL))
		{
			insert_sorted(headsum,temp1->data);
			while(temp2)
			{
				insert_sorted(headsum,temp2->data);
				temp2 = temp2->link;
			}
			break;
		}
		//if 1st list has more elements than the 2nd
		else if((temp2->link == NULL) && (temp1->link != NULL))
		{
			insert_sorted(headsum,temp2->data);
			while(temp1)
			{
				insert_sorted(headsum,temp1->data);
				temp1 = temp1->link;
			}
			break;
		}
		//if both lists have only one element
		else
		{
			insert_sorted(headsum,temp1->data);
			insert_sorted(headsum,temp2->data);
			break;
		}
	}
	return SUCCESS;
}