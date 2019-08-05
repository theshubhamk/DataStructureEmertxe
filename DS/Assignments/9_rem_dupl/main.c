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
		printf("\n1.insert element\n2.REMOVE duplicates\n3.Palindrome\n4.delete MAX\n7.print\n 8.Exit\n");
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
				status = rem_dupl(&head);
				if(status == SUCCESS)
				{
					printf("duplicates REMOVEd\n");
				}
				else
				{
					printf("removal unsuccessful\n");
				}
				break;	
			}
			case 3:
			{
				status = pali(&head);
				if(status == SUCCESS)
				{
					printf("is Palindrome\n");
				}
				else
				{
					printf("not Palindrome\n");
				}
				break;	
			}
			case 4:
			{
				status = del_max(&head);
				if(status == SUCCESS)
				{
					printf("duplicates REMOVEd\n");
				}
				else
				{
					printf("removal unsuccessful\n");
				}
				break;
			}
			case 7:
			{
				//dprint_slist(head,data);
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
