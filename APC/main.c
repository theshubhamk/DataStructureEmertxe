#include "common.h"

int main()
{
	//declare the vars
	slist *head = NULL;
	data_t data, n_data;
	int opt, status, num, n, i, j;
	char s1[255], s2[255];
	int num1[255], num2[255], sum[255];
	//enter the array
	printf("Enter the 1st number\n");
	scanf("%s",s1);
	printf("Enter the 2nd number\n");
	scanf("%s",s2);
	for (i = 0; s1[i] != '\0'; i++)
    {
        num1[i] = s1[i] - '0';
    }
     
    for (j = 0; s2[j] != '\0'; j++)
    {
        num2[j] = s2[j] - '0';
    }
    int length1 = 0, length2 = 0;
    i = 0;
    while(num1[i])
    {
    	i++;
    	length1++;
    }
    j = 0;
    while(num2[j])
    {
    	j++;
    	length2++;
    }

    for(i = 0;i 
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("\n1.Sum\n2.subtract\n3.Divide\n4.Product\n7.print\n8.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			//insert the elements in a sorted order
			case 1:
			{
				
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
