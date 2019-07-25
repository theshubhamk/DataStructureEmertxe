#include "common.h"

int main()
{
	//declare the vars
	slist *head = NULL;
	data_t data;
	int opt, status, num, n;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("1.find mid\n 2.insert at fisrt\n 3.nth from last\n 7.print\n 8.Exit\n 9.Insert after\n 10.delete element\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
			{
				status = find_mid(&head, &data);
				printf("the mid element is : %d\n", data);
				if(status == SUCCESS)
				{
					printf("Mid element found successfully\n");
				}
				else
				{
					printf("finding mid element unsuccessful\n");
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
				printf("Enter the n value from last\n");
				scanf("%d", &n);
				status = nth_last(&head, &data, n);
				printf("the %dth element is : %d\n", n, data);
				if(status == SUCCESS)
				{
					printf("nth element found successfully\n");
				}
				else
				{
					printf("finding nth element unsuccessful\n");
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
