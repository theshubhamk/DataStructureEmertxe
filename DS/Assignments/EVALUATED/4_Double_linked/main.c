#include "common.h"

int main()
{
	//declare vars
	dlist *head = NULL, *tail = NULL;
	data_t data, n_data, g_data;
	int opt, status;
	//run the loop
	while(1)
	{
		//prompt + read user
		printf("\n1.insert after\n2.insert at first\n3.insert before\n4.delete elements\n7.print\n8.Exit\n");
		scanf("%d", &opt);
		printf("\n");
		switch(opt)
		{
			//insert after
			case 1:
			{
				//prompt + read user
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);
				//call the function				
				status = insert_after(&head, &tail, n_data, g_data);
				//check for status
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
			//insert first
			case 2:
			{
				//prompt + read user
				printf("Enter the data\n");
				scanf("%d",&data);
				//call the function
				status = insert_first(&head, &tail, data);
				//check for status
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
			//insert before 
			case 3:
			{
				//prompt + read user
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				printf("Enter the g_data\n");
				scanf("%d",&g_data);
				//call the function				
				status = insert_before(&head, &tail, n_data, g_data);
				//check for status
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
			//to delete element
			case 4:
			{
				//prompt + read user
				printf("Enter the n_data\n");
				scanf("%d",&n_data);
				//call the function
				status = delete_element(&head, &tail, n_data);
				//check for status
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
			//to print element
			case 7:
			{
				print_dlist(head);
				break;
			}
			//exit the program
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