#include "common.h"

int main()
{
	dlist *head = NULL, *tail = NULL;
	data_t data, n_data, g_data;
	int opt, status;
	while(1)
	{
		printf("1.insert after\n 2.insert at first\n 3.insert before\n 4.delete elements\n 7.print\n 8.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);				
				status = insert_after(&head, &tail, n_data, g_data);
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
			case 2:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = insert_first(&head, &tail, data);
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
			case 3:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);				
				status = insert_before(&head, &tail, n_data, g_data);
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
			case 4:
			{
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				status = delete_element(&head, &tail, n_data);
				if(status == SUCCESS)
				{
					printf("delete successful \n");
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
			case 7:
			{
				print_dlist(head);
				break;
			}
			case 8:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}