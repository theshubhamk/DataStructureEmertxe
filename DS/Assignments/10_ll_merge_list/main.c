#include "common.h"

int main()
{
	//declare the vars
	slist *headnum1 = NULL;
	slist *headnum2 = NULL;
	slist *headsum = NULL;
	data_t data, n_data;
	int opt, status, num, n;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("\n1.merge list\n2.create list 1\n3.create list 2\n7.print\n8.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			//insert the elements in a sorted order
			case 1:
			{
				//prompt + read user
				status = merge_list(&headnum1, &headnum2, &headsum);
				//check the status
				if(status == SUCCESS)
				{
					printf("data merged successfully\n");
				}
				else
				{
					printf("data merged unsuccessful\n");
				}
				break;
			}
			//insert the elements at the start of the list
			case 2:
			{
				//prompt + read user
				printf("Enter the data to be inserted in LL1\n");
				scanf("%d",&data);
				//call the function
				status = insert_at_first(&headnum1, data);
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
				printf("Enter the data to be inserted in LL2\n");
				scanf("%d",&data);
				//call the function
				status = insert_at_first(&headnum2, data);
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
			//print the elements
			case 7:
			{
				printf("list 1 is:\n");
				print_slist(headnum1);
				printf("\n");
				printf("list 2 is:\n");
				print_slist(headnum2);
				printf("\n");
				printf("the merged list is:\n");
				print_slist(headsum);
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
