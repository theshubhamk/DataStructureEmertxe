#include "common.h"

int main()
{
	//declare the vars
	slist *head = NULL;
	data_t data, n_data, g_data;
	int opt, status, num;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("1.insert at last\n 2.insert at fisrt\n 3.delete fisrt\n 4.delete last\n 5.delete list\n 6.find node\n 7.print\n 8.Exit\n 9.Insert after\n 10.delete element\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = insert_at_last(&head, data);
				if(status == SUCCESS)
				{
					printf("Head inserted at last\n");
				}
				else
				{
					printf("Head insertion unsuccessful\n");
				}
				break;
			}
			case 2:
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
			case 3:
			{
				status = delete_first(&head);
				if(status == SUCCESS)
				{
					printf("delete at first successful\n");
				}
				else
				{
					printf("delete at first unsuccessful\n");
				}
				break;
			}
			case 4:
			{
				status = delete_last(&head);
				if(status == SUCCESS)
				{
					printf("delete at last successful\n");
				}
				else
				{
					printf("delete at last unsuccessful\n");
				}
				break;
			}
			case 5:
			{
				status = delete_list(&head);
				if(status == SUCCESS)
				{
					printf("delete list successful\n");
				}
				else
				{
					printf("delete list unsuccessful\n");
				}
				break;
			}
			case 6:
			{
				printf("Enter the node data to find\n");
				scanf("%d",&num);
				status = find_node(head, data, num);
				if(status == SUCCESS)
				{
					printf("node found\n");
				}
				else if (status == DATA_NOT_FOUND)
				{
					printf("node not found\n");
				}
				else
				{
					printf("Node find unsuccessful\n");
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
