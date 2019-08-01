#include "common.h"

int main()
{
	//declare the vars
	cq_array *q = malloc(sizeof(cq_array));
	//validation
	if(q == NULL)
	{
		printf("memory allocation unsuccessful\n");
		exit(0);
	}
	//initialize the front and rear to -1.
	q->front = -1;
	q->rear = -1;
	q->count = 0;

	data_t data;
	int opt, status, count;
	while(1)
	{
		//prompt + read user
		printf("Enter the option 1. enq\n 2. deq\n 3. print \n 4. EXIT \n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			//circular enqueue
			case 1:
			{
				//prompt + read user data
				printf("Enter the data \n");
				scanf("%d", &data);
				//call the function
				status = CENQ(q, data);
				if(status == SUCCESS)
				{
					printf("data saved into queue successfully\n");
				}
				else if(status == Q_FULL)
				{
					printf("queue full\n");
				}
				else
				{
					
					printf("Data save unsuccessful\n");
				}
				break;
			}
			//circular dequeue
			case 2:
			{
				//call the function
				status = CDEQ(q, &data);
				if(status == SUCCESS)
				{
					printf("data removed out successfully from the queue is : %d \n", data);
				}
				else if(status == Q_EMPTY)
				{
					printf("queue empty\n"); 
				}
				else
				{
					printf("Data removal unsuccessful\n");
				}
				break;
			}
			//print the queue
			case 3:
			{
				//call the function
				status = print(*q);
				if(status == SUCCESS)
				{
					printf("Print successful\n");
				}
				else if(status == Q_EMPTY)
				{
					printf("queue full\n");
				}
				else
				{
					printf("queue empty\n");
				}
				break;
			}
			//exit the program
			case 4:
			{
				exit(1);
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}
