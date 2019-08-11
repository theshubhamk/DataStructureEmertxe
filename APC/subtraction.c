#include "common.h"
extern int  flag;
int subtraction(slist *num1, slist *num2, slist **result)
{
	reverse(&num1);
	reverse(&num2);
	int barrow = 0;
	int sub = 0;
	slist *temp1 = num1;
	slist *ptr = num2;
	slist *reduse_bar;
	
	while (temp1 || ptr)
	{
		if (temp1->data < ptr->data && temp1->link != NULL)
		{	
			barrow = 10000;			
			if (temp1->link->data == 0)
			{
				reduse_bar = temp1;
				while (reduse_bar)
				{
					reduse_bar = reduse_bar->link;
					reduse_bar->data = 9999;
					if (reduse_bar->link->data == 0)
					{
						continue;
					}
					else
					{
						reduse_bar->link->data -= 1;
						break;
					}
				}
			}
			else
			{
				temp1->link->data = temp1->link->data - 1;
			}
		//	printf("qq: %d", temp1->data);
		//	printf("barrow : %d\n", barrow);
		}

			sub = temp1->data - ptr->data + barrow;
			barrow = 0;
			
		insert_at_first(result, (sub % 10000));
		//print_list(*result);

		temp1 = temp1->link;
		ptr = ptr->link;

		if (ptr == NULL)
		{
			while (temp1)
			{
				insert_at_first(result, temp1->data + barrow);
				barrow = 0;
				temp1 = temp1->link;
			}
		}	
		
	}
	
	reverse(&num1);
	reverse(&num2);
	slist *del = *result;
    while(del)
    {
    	if(del->data == 0)
    	{
    		*result =(*result)->link;
    		del->link == NULL;
    		free(del);
    		del = *result;
    	}
    	else
    	{
    		break;
    	}

    }
	return SUCCESS;
}

/*	while (take_bar)
			{
				mask *= 10;
				take_bar /= 10;
			}
		*/
		//	printf("mask= %d\n", mask);
