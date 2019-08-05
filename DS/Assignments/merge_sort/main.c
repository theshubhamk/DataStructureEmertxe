#include "common.h"

int main()
{
	//declare the vars
	int *arr = malloc(sizeof(int) * 100);
	//validation
	if(arr == NULL)
	{
		printf("memory allocation unsuccessful\n");
		exit(0);
	}
	int key, size;
	int opt, status, i;

	//prompt + read array
	printf("Enter the size of array\n");
	scanf("%d", &size);
	//elements
	printf("Enter the elements of the array\n");
	for(i = 0;i < size;i++)
	{
		scanf("%d",&arr[i]);
	}

	while(1)
	{
		//prompt + read user
		printf("\nEnter the option\n1.Quick Sort\n3.exit\n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			//push the data onto the stack
			case 1:
			{
				int first = 0;
				int last = size-1;
				printf("The unsorted array is :\n");
				for(i = 0;i < size;i++)
				{
					printf("%d\t", arr[i]);	
				}
				printf("\n");
				//call the function
				msort(arr, first, last);
				printf("The sorted array is\n");
				for(i = 0;i < size;i++)
				{
					printf("%d\t", arr[i]);	
				}
				/*//check the status
				if(status == 1)
				{
					printf("sorted\n");
				}
				else
				{
					printf("sort unsuccessful\n");
				}*/
				break;
			}
			case 3:
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
