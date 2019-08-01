#include "common.h"

int DEQ(qlist **front, data_t *data)
{
	//define temporary vars
	qlist *temp;
	qlist *temp1;
	//validation
	if(*front == NULL)
	{
		return Q_EMPTY;
	}
	//assign temporary vars to front
	temp = *front;
	temp1 = *front;

	temp1 = temp1->link;
	//if only one node is there
	if(((*front)->link) == *front)
	{
		*data = (*front)->data;
		free(*front);
		*front = NULL;
		return SUCCESS;
	}
	//if more than one nodes are there
	//travesre to the node
	while(temp1->link != *front)
	{
		temp = temp->link;
		temp1 = temp1->link;
		*data = temp1->data;
	}
	//temp->link = NULL;
	//delete the node
	free(temp1);
	temp->link = *front;
	//delete the node
	//free(temp1);
	return SUCCESS;
}
