#include "common.h"

int main()
{
	//declare the vars
	slist *head = NULL;
	data_t data, n_data;
	int opt, status, num, n;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("\n1.Insert sorted\n2.insert at fisrt\n3.create loop\n4.find loop\n7.print\n8.Exit\n9.Insert after\n10.delete element\n");
		scanf("%d", &opt);
		switch(opt)
		{
			//insert the elements in a sorted order
			case 1:
			{
				//prompt + read user
				printf("Enter the data to be inserted\n");
				scanf("%d", &data);
				//call the function
				status = insert_sorted(&head, data);
				//check the status
				if(status == SUCCESS)
				{
					printf("data inserted successfully\n");
				}
				else
				{
					printf("data insertion unsuccessful\n");
				}
				break;
			}
			//insert the elements at the start of the list
			case 2:
			{
				//prompt + read user
				printf("Enter the data\n");
				scanf("%d",&data);
				//call the function
				status = insert_at_first(&head, data);
				//check the status
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
				//prompt + read user
				printf("Enter the data from where the loop will start\n");
				scanf("%d",&n_data);
				//call the function
				status = create_loop(&head, n_data);
				//check the status
				if(status == SUCCESS)
				{
					printf("loop created\n");
				}
				else if(status == DATA_NOT_FOUND)
				{
					printf("DATA not found\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("loop creation unsuccessful\n");
				}
				break;
			}
			case 4:
			{
				//call the function
				status = find_loop(&head);
				//check the status
				if(status == SUCCESS)
				{
					printf("loop found\n");
				}
				else if(status == FAILURE)
				{
					printf("loop not found\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("loop find unsuccessful\n");
				}
				break;
			}
			//print the elements
			case 7:
			{
				print_slist(head);
				break;
			}
			//exit
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
