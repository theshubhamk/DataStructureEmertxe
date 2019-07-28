#include "common.h"

int main()
{
	//declare the variables
	slist *head = NULL;
	data_t data, n_data, g_data;
	int opt, status, n;
	//run an infinite loop
	while(1)
	{
		//give user options
		printf("1.insert at first\n 2.insert before\n 3.Insert Nth\n 7.print\n 8.Exit\n 9.Insert after\n 10.delete element\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = insert_at_first(&head, data);
				if(status == SUCCESS)
				{
					printf("Head inserted at first\n");
				}
				else
				{
					printf("Head insertion unsuccessful\n");
				}
				break;
			}
			case 2:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);				
				status = insert_before(&head, n_data, g_data);
				if(status == SUCCESS)
				{
					printf("data inserted before \n");
				}
				else if(status == DATA_NOT_FOUND)
				{
					printf("Data not found in the list\n");
				}
				else
				{
					printf("data insertion unsuccessful\n");
				}
				break;	
			}
			case 3:
			{
				printf("Enter the nth position at which data needs to be inserted\n");
				scanf("%d",&n);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);				
				status = insert_nth(&head, g_data, n);
				if(status == SUCCESS)
				{
					printf("data inserted at the %dth position \n", n);
				}
				else if(status == OUT_OF_RANGE)
				{
					printf("Node is out of range \n");
				}
				else
				{
					printf("data insertion unsuccessful\n");
				}
				break;
			}
			case 7:
			{
				print_slist(head);
				break;
			}
			case 8:
			{
				exit(0);
				break;
			}
			case 9:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);				
				status = insert_after(&head, n_data, g_data);
				if(status == SUCCESS)
				{
					printf("data inserted after \n");
				}
				else if(status == DATA_NOT_FOUND)
				{
					printf("Data not found in the list\n");
				}
				else
				{
					printf("data insertion unsuccessful\n");
				}
				break;
			}
			case 10:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				status = delete_element(&head, n_data);
				if(status == SUCCESS)
				{
					printf("deleted the element \n");
				}
				else
				{
					printf("delete unsuccessful\n");
				}
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}