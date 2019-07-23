#include "common.h"

int main()
{
	slist *head = NULL;
	data_t data, n_data, g_data;
	int opt, status;
	while(1)
	{
		printf("1.insert at first\n 7.print\n 8.Exit\n 9.Insert after\n 10.delete element\n");
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