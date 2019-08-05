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
		printf("\nEnter the option\n1.bin_search\n2.binary_search_recursive\n3.selection sort\n4.insertion sort\n5.print\n6.exit\n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			//push the data onto the stack
			case 1:
			{
				printf("Enter the data to search\n");
				scanf("%d", &key);
				//call the function
				status = binary_search(arr,size,key);
				//check the status
				if(status == SUCCESS)
				{
					printf("KEY FOUND\n");
				}
				else
				{
					printf("KEY NOT FOUND\n");
				}
				break;
			}
			case 2:
			{
				int first = 0, last = size - 1;
				int ret;
				printf("Enter the data to search\n");
				scanf("%d", &key);
				//call the function
				bubb_sort(arr,size);
				status = binary_search_recursive(arr, first, last, key);
				//check the status
				if(status == SUCCESS)
				{
					printf("KEY FOUND\n");
				}
				else
				{
					printf("KEY NOT FOUND\n");
				}
				break;
			}
			case 3:
			{
				int first = 0, last = size - 1;
				int ret;
				printf("Enter the data to search\n");
				scanf("%d", &key);
				//call the function
				sort_sel(arr,size);
				print(arr, size);
				printf("\n");
				/*status = binary_search_recursive(arr, first, last, key);
				//check the status
				if(status == SUCCESS)
				{
					printf("KEY FOUND\n");
				}
				else
				{
					printf("KEY NOT FOUND\n");
				}*/
				break;
			}
			case 4:
			{
				int first = 0, last = size - 1;
				int ret;
				printf("Enter the data to search\n");
				scanf("%d", &key);
				//call the function
				sort_ins(arr,size);
				print(arr, size);
				/*
				status = binary_search_recursive(arr, first, last, key);
				//check the status
				if(status == SUCCESS)
				{
					printf("KEY FOUND\n");
				}
				else
				{
					printf("KEY NOT FOUND\n");
				}*/
				break;
			}
			case 5:
			{
				//print(arr, size);
			}
			case 6:
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
