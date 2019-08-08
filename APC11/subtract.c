#include "common.h"

int subtract_nodes(slist **headnum1, slist **headnum2, slist **headsum)
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
	/*slist *temp, *temp1, *temp2;
	temp1 = *headnum1;
	temp2 = *headnum2;
	int no_of_nodes1 = 0, no_of_nodes2 = 0, flag = 0, count, tempCount;
	while(temp1->link)
	{
		no_of_nodes1++;
		temp1 = temp1->link;
	}
	while(temp2->link)
	{
		no_of_nodes2++;
		temp2 = temp2->link;
	}
	no_of_nodes1 = no_of_nodes1 + 1;
	no_of_nodes2 = no_of_nodes2 + 1;
	printf("%d %d\n", no_of_nodes1, no_of_nodes2);
	if(no_of_nodes1 == no_of_nodes2)
	{
		printf("fdjasnjds\n");
		temp1 = *headnum1;
		temp2 = *headnum2;
		while(temp1)
		{
			if(temp1->data < temp2->data)
			{
				temp1 = *headnum2;
				temp2 = *headnum1;
				flag = 1;
				break;
			}
			else if(temp1->data > temp2->data)
			{
				temp1 = *headnum1;
				temp2 = *headnum2;
				break;
			}
			else if((temp1->data == temp2->data) && temp1->link == NULL)
			{
				temp1 = *headnum1;
				temp2 = *headnum2;
				break;
				/*count = no_of_nodes1 - 1;
				printf("ct :%d\n", count );
				temp1 = *headnum1;
				temp2 = *headnum2;
				tempCount = count;
				while(tempCount)
				{
					temp1 = *headnum1;
					temp2 = *headnum2;

					while(count)
					{
						if(temp1->link)
						{
							temp1 = temp1->link;
							temp2 = temp2->link;
						}
						count--;
					}
					
					if(temp1->data < temp2->data)
					{
						temp1 = *headnum2;
						temp2 = *headnum1;
						flag = 1;
						break;
					}
					else if(temp1->data > temp2->data)
					{
						temp1 = *headnum1;
						temp2 = *headnum2;
						break;
					}
					else
					{
						count = tempCount - 1;
					}
					tempCount = count;
					temp1 = *headnum1;
					temp2 = *headnum2;
				}//

			}
			else
			{
				temp1 = temp1->link;
				temp2 = temp2->link;
			}


		}
	}
	else if(no_of_nodes1 < no_of_nodes2)
	{
		flag = 1;
		temp1 = *headnum2;
		temp2 = *headnum1;
	}
	else
	{
		temp1 = *headnum1;
		temp2 = *headnum2;
	}
	printf("a: %d\n",temp1->data);
	printf("b: %d\n",temp2->data);*/
	reverse(&(*headnum1));
	reverse(&(*headnum2));
	printf("num1: \n");
				print_slist((*headnum1));
				printf("\n");
				printf("num2: \n");
				print_slist((*headnum2));
	slist *temp, *temp1, *temp2;
	temp1 = *headnum1;
	temp2 = *headnum2;
	int no_of_nodes1 = 0, no_of_nodes2 = 0, flag = 0, count, tempCount;
	while(temp1)
	{
		no_of_nodes1++;
		temp1 = temp1->link;
	}
	while(temp2)
	{
		no_of_nodes2++;
		temp2 = temp2->link;
	}
	//no_of_nodes1 = no_of_nodes1 + 1;
	//no_of_nodes2 = no_of_nodes2 + 1;
	printf("%d %d\n", no_of_nodes1, no_of_nodes2);
	if(no_of_nodes1 == no_of_nodes2)
	{
		count = no_of_nodes1;
		printf("ct :%d\n", count );
		temp1 = *headnum1;
		temp2 = *headnum2;
		tempCount = count;
		while(tempCount)
		{
			temp1 = *headnum1;
			temp2 = *headnum2;
			while(count-1)
			{
				//if(temp1->link)
				{
					temp1 = temp1->link;
					temp2 = temp2->link;
				}
				count--;
			}
			if(temp1->data < temp2->data)
			{
				temp1 = *headnum2;
				temp2 = *headnum1;
				flag = 1;
				break;
			}
			else if(temp1->data > temp2->data)
			{
				temp1 = *headnum1;
				temp2 = *headnum2;
				break;
			}
			else
			{
				count = tempCount - 1;
			}
			tempCount = count;
			//temp1 = *headnum1;
			//temp2 = *headnum2;

		}
		/*printf("fdjasnjds\n");
		if(temp1->data < temp2->data)
		{
			temp1 = *headnum2;
			temp2 = *headnum1;
			flag = 1;
		}
		else if(temp1->data == temp2->data)
		{
			count = no_of_nodes1 - 1;
			printf("ct :%d\n", count );
			temp1 = *headnum1;
			temp2 = *headnum2;
			tempCount = count;
			while(tempCount)
			{
				temp1 = *headnum1;
				temp2 = *headnum2;

				while(count)
				{
					if(temp1->link)
					{
						temp1 = temp1->link;
						temp2 = temp2->link;
					}
					count--;
				}

				if(temp1->data < temp2->data)
				{
					temp1 = *headnum2;
					temp2 = *headnum1;
					flag = 1;
					break;
				}
				else if(temp1->data > temp2->data)
				{
					temp1 = *headnum1;
					temp2 = *headnum2;
					break;
				}
				else
				{
					count = tempCount - 1;
				}
				tempCount = count;
				temp1 = *headnum1;
				temp2 = *headnum2;
			}
		}
		else
		{
			temp1 = *headnum1;
			temp2 = *headnum2;	
		}*/
	}
	else if(no_of_nodes1 < no_of_nodes2)
	{
		flag = 1;
		temp1 = *headnum2;
		temp2 = *headnum1;
	}
	else
	{
		temp1 = *headnum1;
		temp2 = *headnum2;
	}
	
	temp = *headsum;
	//temp1 = *headnum1;
	//temp2 = *headnum2;
	printf("a: %d\n",temp1->data);
	printf("b: %d\n",temp2->data);
	printf("flag %d \n", flag );
	int carry = 0;
	int sum = 0;
	int sum1 = 0;
	//temp1 = *headnum1;
	//temp2 = *headnum2;
    while((temp1 && temp2))
    {
    	if(temp1->data < temp2->data)
    	{
    		temp1->data = temp1->data + 10000;
    		temp1->link->data = temp1->link->data - 1;
    	}
        sum = (temp1->data - temp2->data); //+ carry) % 10000;
        //carry = (temp1->data + temp2->data + carry) / 10000;
        //printf("\n");
        //printf("%d\n",carry );

        //insert node with n_data;
		slist *new = malloc(sizeof(slist));
		//validation
		new->data = sum;
		new->link = *headsum;
		//since head is still pointing to the old first node we need to reassin head to the new first node.
		*headsum = new;
		/*if((temp2->link == NULL) && (temp1->link == NULL))
		{
			temp1 = temp1->link;
			temp2 = temp2->link;
			if(temp1->data < )
			{

				slist *new = malloc(sizeof(slist));
				//validation
				new->data = carry;
				new->link = *headsum;
				//since head is still pointing to the old first node we need to reassin head to the new first node.
				*headsum = new;
			}
			break;
		}*/
		/*else if(temp1->link == NULL)
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
		}*/
		if(temp2->link == NULL)
		{
			printf("inti\n");
			while(temp1->link)
			{
				temp1 = temp1->link;
				sum = temp1->data;
				//carry = 0;

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
    //
    slist *del = *headsum;
    while(del)
    {
    	if(del->data == 0)
    	{
    		*headsum =(*headsum)->link;
    		del->link == NULL;
    		free(del);
    		del = *headsum;
    	}
    	else
    	{
    		break;
    	}

    }
    reverse(&(*headnum1));
	reverse(&(*headnum2));
	if(flag == 1)
    {
    	return FLAG;	
    }
    return SUCCESS;

}