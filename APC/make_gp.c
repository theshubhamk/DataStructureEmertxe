#include "common.h"

int make_group(slist **headnum1, data_t *num1, int length1)
{
	int i = 0, j = length1 - 1, k, count = length1, n_data, mask;
	while(count > 0)
	{	
		if(count < 4 && count > 0)
		{
			mask = 1;
			n_data = 0;
				printf("\ninside while count num2: \n");
			  	int k = 0;
			    while(num1[k])
			    {
			    	printf("%d",num1[k]);
			    	k++;
			    }
			while(num1[j])
			{
				//n_data = (n_data * 10) + num1[j];
				n_data = n_data + (num1[j] * mask);
				mask = mask * 10;
				j--;
				printf("%d\n",num1[j] );
				printf("\nn_data inside : %d\n",n_data);
			}
			printf("\nn_data outside: %d\n",n_data);
			//n_data = rev(n_data);
			//insert node with n_data;
			slist *new = malloc(sizeof(slist));
			//validation
			new->data = n_data;
			new->link = *headnum1;
			//since head is still pointing to the old first node we need to reassin head to the new first node.
			*headnum1 = new;
			return SUCCESS;
			break;
		}
		n_data = 0;
		mask = 1;
		for(i = 0;i < 4;i++)
		{
			//n_data = (n_data * 10) + num1[j];
			n_data = n_data + (num1[j] * mask);
			mask = mask * 10;
			j--;
		}
		//n_data = rev(n_data);
		//insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = n_data;
		new->link = *headnum1;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headnum1 = new;
		//i = i + 1;

		count = count - 4;

	}
	return SUCCESS;
}


