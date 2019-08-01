#include "common.h"

int main()
{
	//declare the vars
	s_array *s = malloc(sizeof(s_array));
	//validation
	if(s == NULL)
	{
		printf("memory allocation unsuccessful\n");
		exit(0);
	}
	s->top = -1;
	data_t data;
	int opt, status;
	while(1)
	{
		//prompt + read user
		printf("Enter the option 1. PUSH\n 2. POP\n 3. PEEP\n 4. PEAK \n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			//push the data onto the stack
			case 1:
			{
				printf("Enter the data to push\n");
				scanf("%d", &data);
				//call the function
				status = PUSH(s, data);
				//check the status
				if(status == SUCCESS)
				{
					printf("data pushed successfylly into the stack\n");
				}
				else
				{
					
					printf("Data push unsuccessful\n");
				}
				break;
			}
			//pop the data from the stack
			case 2:
			{
				//call the function
				status = POP(s, &data);
				//check the status
				printf("%d\n",s->top);
				if(status == SUCCESS)
				{
					printf("data popped out successfylly from the stack is : %d \n", data);
				}
				else
				{
					printf("Data pop unsuccessful\n");
				}
				break;
			}
			//print all elements of the stack
			case 3:
			{
				//call the function
				status = PEEP(*s);
				//check the status 
				if(status == SUCCESS)
				{
					printf("Print successful\n");
				}
				else if(status == STACK_OVERFLOW)
				{
					printf("STACK_OVERFLOW\n");
				}
				else
				{
					printf("STACK_UNDERFLOW\n");
				}
				break;
			}
			//print the peak value from the stack
			case 4:
			{
				//call the function
				status = PEAK(s, &data);
				//check the status
				if(status == SUCCESS)
				{
					printf("The peak data from the stack is  : %d \n", data);
				}
				else
				{
					printf("Data finding unsuccessful\n");
				}
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}
