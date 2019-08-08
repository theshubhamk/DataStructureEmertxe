#include "common.h"

int make_group2(slist **headnum2, data_t *num2, int length2)
{
	int i = 0, j = length2 - 1, k, count = length2, n_data;
	if(length2 < 4 && length2 > 0)
	{
		n_data = 0;
		while(num2[j])
		{
			n_data = (n_data * 10) + num2[j];
			j--;
		}
		n_data = rev(n_data);
		//insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = n_data;
		new->link = *headnum2;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headnum2 = new;
		return SUCCESS;
	//	break;
	}
		
	while(count > 0)
	{
		if(count < 4 && count > 0)
		{
			n_data = 0;
			while(num2[j])
			{
				n_data = (n_data * 10) + num2[j];
				j--;
			}
			n_data = rev(n_data);
			//insert node with n_data;
			slist *new = malloc(sizeof(slist));
			//validation
			new->data = n_data;
			new->link = *headnum2;
			//since head is still pointing to the old first node we need to reassin head to the new first node.
			*headnum2 = new;
			return SUCCESS;
			break;
		}
		n_data = 0;
		for(i = 0;i < 4;i++)
		{
			n_data = (n_data * 10) + num2[j];
			j--;
		}
		n_data = rev(n_data);
		//insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = n_data;
		new->link = *headnum2;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headnum2 = new;
		//i = i + 1;

		count = count - 4;

	}
	return SUCCESS;
}
