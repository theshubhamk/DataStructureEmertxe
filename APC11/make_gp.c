#include "common.h"

int make_group(slist **headnum1, data_t *num1, int length1)
{
	int i = length1 - 1, data, count = length1;
	int mask;
		while (count > 0)
		{
			int k = 0;
			data = 0;
			mask = 1;

			if (count <= 4)
			{
				for ( ; i >= 0; i--)
				{
					data = data + num1[i] * mask; 
					mask *= 10;

				}		//n_data = rev(n_data);
				//insert node with n_data;
				slist *new = malloc(sizeof(slist));
				//validation
				new->data = data;
				new->link = *headnum1;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headnum1 = new;
				return SUCCESS;
				break;
		}
		for ( ; i >= 0; i--)
		{
			//mask = 1;
			if (k < 4 )
				{
					data =  data + num1[i] * mask;
					k++;
					mask *= 10;
					continue; 
				}
			//	data = reverse_data(data);
				printf("%d\n", data);
			
				//r = j;
				//n_data = rev(n_data);
				//insert node with n_data;
				slist *new = malloc(sizeof(slist));
				//validation
				new->data = data;
				new->link = *headnum1;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headnum1 = new;
				//i = i + 1;
				break;
		}
		count = count - 4;

	}
	return SUCCESS;
}


