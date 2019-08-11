#include "common.h"

int bst_insert(tree_t **root, data_t data)
{
	tree_t *new = malloc(sizeof(tree_t));
	new->data = data;
	new->LC = NULL;
	new->RC = NULL;

	if(*root == NULL)
	{
		*root = new;
		return SUCCESS;
	}
	tree_t *temp, *parent;
	temp = *root;
	int flag;
	while(temp)
	{
		parent = temp;
		if(data < temp->data)
		{
			temp = temp->LC;
			flag = 1;
		}
		else if(data > temp->data)
		{
			temp = temp->RC;
			flag = 0;
		}
		else
		{
			return DUPLICATE_FOUND;
		}
	}
	if(flag == 1)
	{
		parent->LC = new;
	}
	else
	{
		parent->RC = new;
	}
	return SUCCESS;
}	