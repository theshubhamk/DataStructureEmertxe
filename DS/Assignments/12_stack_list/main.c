#include "common.h"

int main()
{
	//declare the vars
	slist *top = NULL;
	data_t data, n_data, g_data;
	int opt, status, num;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("1.PUSH\n 2.POP\n 3.PEAK\n 4.PEEP\n 5.Exit\n");
		scanf("%d", &opt);
		printf("\n");
		switch(opt)
		{
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = PUSH(&top, data);
				if(status == SUCCESS)
				{
					printf("Push successful\n");
				}
				else
				{
					printf("Push unsuccessful\n");
				}
				break;
			}
			case 2:
			{
				status = POP(&top, &data);
				if(status == SUCCESS)
				{
					printf("The popped data is : %d \n", data);
				}
				else if(status = STACK_UNDERFLOW)
				{
					printf("STACK_UNDERFLOW\n");
				}
				else
				{
					printf("STACK_EMPTY\n");
				}
				break;
			}
			case 3:
			{
				status = PEAK(&top, &data);
				if(status == SUCCESS)
				{
					printf("The peak data is :%d \n", data);
				}
				else
				{
					printf("STACK_EMPTY\n");
				}
				break;
			}
			case 4:
			{
				PEEP(top);
				/*
				if(status == SUCCESS)
				{
					printf("delete list successful\n");
				}
				else
				{
					printf("delete list unsuccessful\n");
				}*/
				break;
			}
			case 5:
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
