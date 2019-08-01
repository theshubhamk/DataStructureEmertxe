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
		printf("1.insert at first\n2.value sort\n3.node sort\n7.print\n 8.Exit\n");
		scanf("%d", &opt);
		printf("\n");
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
				status = sort_value(&head);
				if(status == SUCCESS)
				{
					printf("sort successful\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("sort unsuccessful\n");
				}
				break;
			}
			case 3:
			{
				status = sort_node(&head);
				if(status == SUCCESS)
				{
					printf("sort successful\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("sort unsuccessful\n");
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
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}
