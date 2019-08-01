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
		printf("1.insert at first\n2.reverse\n3.reverse_val\n4.reverse_recursion\n7.print\n 8.Exit\n");
		scanf("%d", &opt);
		printf("\n");
		switch(opt)
		{
			//insert at first
			case 1:
			{
				//prompt + read user
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
			//reverse using the node relinking
			case 2:
			{
				status = reverse(&head);
				if(status == SUCCESS)
				{
					printf("reverse successful\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("reverse unsuccessful\n");
				}
				break;
			}
			//reverse using swapping the values
			case 3:
			{
				//call the function
				status = reverse_val(&head);
				if(status == SUCCESS)
				{
					printf("reverse successful\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("reverse unsuccessful\n");
				}
				break;
			}
			case 4:
			{
				//call the function
				slist *temp = (slist *)rev_rec(&head);
				/*
				if(status == SUCCESS)
				{
					printf("reverse successful\n");
				}
				else if(status == LIST_EMPTY)
				{
					printf("LIST_EMPTY\n");
				}
				else
				{
					printf("reverse unsuccessful\n");
				}*/
				break;
			}
			//print
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
