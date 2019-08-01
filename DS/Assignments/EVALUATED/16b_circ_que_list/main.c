#include "common.h"

int main()
{
	//declare the vars
	qlist *front = NULL;
	data_t data, n_data, g_data;
	int opt, status, num;
	//run an infinite while loop
	while(1)
	{
		//promot + read the user options
		printf("\n1.ENQ\n2.DEQ\n3.print\n4.EXIT\n");
		scanf("%d", &opt);
		printf("\n");
		switch(opt)
		{
			//enqueue
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status = ENQ(&front, data);
				if(status == SUCCESS)
				{
					printf("Data inserted in queue\n");
				}
				else
				{
					printf("Data insertion unsuccessful\n");
				}
				break;
			}
			//dequeue
			case 2:
			{
				status = DEQ(&front, &data);
				if(status == SUCCESS)
				{
					printf("First member of the queue was: %d\n", data);
				}
				else if(status == Q_EMPTY)
				{
					printf("queue empty");
				}
				else
				{
					printf("Data insertion in queue unsuccessful\n");
				}
				break;
			}
			//print the elements
			case 3:
			{
				print(front);
				break;
			}
			//exit
			case 4:
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
