#include "common.h"

int main()
{
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
		printf("Enter the option 1. PUSH\n 2. POP\n 3. PEEP\n 4. PEAK \n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			case 1:
			{
				printf("Enter the data to push\n");
				scanf("%d", &data);
				status = PUSH(s, data);
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
			case 2:
			{
				status = POP(s, &data);
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
			case 3:
			{
				status = PEEP(*s);
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
			case 4:
			{
				status = PEAK(s, &data);
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
