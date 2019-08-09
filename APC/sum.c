#include "common.h"

int sum_nodes(slist **headnum1, slist **headnum2, slist **headsum)
{
	if(*headnum2 == NULL || *headnum1 == NULL)
	{
		return FAILURE;
	}
				printf("num1: \n");
				print_slist((*headnum1));
				printf("\n");
				printf("num2: \n");
				print_slist((*headnum2));
	
	reverse(&(*headnum1));
	reverse(&(*headnum2));

				printf("\n");
				printf("num1: \n");
				print_slist((*headnum1));
				printf("\n");
				printf("num2: \n");
				print_slist((*headnum2));
	slist *temp, *temp1, *temp2;
	temp1 = *headnum1;
	temp2 = *headnum2;
	temp = *headsum;

	int carry = 0;
	int sum = 0;
	int sum1 = 0;
    while((temp1 && temp2 ))
    {
        sum = (temp1->data + temp2->data + carry) % 10000;
        carry = (temp1->data + temp2->data + carry) / 10000;
        printf("\n");
       // printf("%d\n",carry );
        //insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = sum;
		new->link = *headsum;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headsum = new;
		if((temp2->link == NULL) && (temp1->link == NULL))
		{
			temp1 = temp1->link;
			temp2 = temp2->link;
			if(carry)
			{

				slist *new = malloc(sizeof(slist));
				//validation
				new->data = carry;
				new->link = *headsum;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headsum = new;
			}
			break;
		}
		else if(temp1->link == NULL)
		{
			while(temp2->link)
			{
				temp2 = temp2->link;
				sum = (temp2->data + carry);
				carry = 0; 
				slist *new = malloc(sizeof(slist));
				//validation
				new->data = sum;
				new->link = *headsum;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headsum = new;
			}
			break;
		}
		else if(temp2->link == NULL)
		{
			while(temp1->link)
			{
				temp1 = temp1->link;
				sum = temp1->data + carry;
				carry = 0;

				slist *new = malloc(sizeof(slist));
				//validation
				new->data = sum;
				new->link = *headsum;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headsum = new;
			}
			break;	
		}
		else
		{
			temp1 = temp1->link;
			temp2 = temp2->link;
		}
    }
 //   reverse(&(*headnum1));
	//reverse(&(*headnum2));
    return SUCCESS;

}