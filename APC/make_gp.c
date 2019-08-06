#include "common.h"

int make_group(slist **headnum1, data_t *num1, int length1)
{
	int i = 0, j = length1 - 1, k, count = length1, n_data;
	while(count > 0)
	{
		n_data = 0;
		for(i = 0;i < 4;i++)
		{
			n_data = (n_data * 10) + num1[j];
			j--;
		}
		n_data = rev(n_data);
		//insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = n_data;
		new->link = *headnum1;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headnum1 = new;
		//i = i + 1;

		count = count - 4;

		if(count < 4 && count > 0)
		{
			n_data = 0;
			while(num1[j])
			{
				n_data = (n_data * 10) + num1[j];
				j--;
			}
			n_data = rev(n_data);
			//insert node with n_data;
			slist *new = malloc(sizeof(slist));
			//validation
			new->data = n_data;
			new->link = *headnum1;
			//since head is still pointing to the old first node we need to reassin head to the new first node.
			*headnum1 = new;
			break;
		}

	}

}

int rev(int n_data)
{
	int num = n_data, rev = 0, rem;
	while(num)
	{
		rem = num % 10;
		rev	= (rev * 10) + rem;
		num = num / 10;
	}
	return rev;
}