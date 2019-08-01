#include "common.h"

int main()
{
	//declare vasr
	dlist *head = NULL, *tail = NULL;
	data_t data, n_data, g_data;
	int opt, status;
	while(1)
	{
		//prompt + read user
		printf("1.insert at last\n 2.insert at fisrt\n 3.delete first\n 4.delete last\n 5.delete list\n 7.print\n 8.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			//insert at last
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = insert_last(&head, &tail, data);
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
			//insert at first
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
			//delete the first value
			case 3:
			{
				status = delete_first(&head, &tail);
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
				status = delete_last(&head, &tail);
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