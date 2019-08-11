#include "common.h"

int main()
{
	//declare the vars
	tree_t *root = NULL;
	data_t data, n_data, g_data;
	int opt, status, num;
	//run an infinite while loop
	while(1)
	{
		//print the user options
		printf("\n1.binary tree\n7.print\n 8.Exit\n");
		scanf("%d", &opt);
		printf("\n");
		switch(opt)
		{
			case 1:
			{
				printf("Enter the data\n");
				scanf("%d",&data);
				status =  bst_insert(&root,data);
				if(status == SUCCESS)
				{
					printf("tree element inserted successfully\n");
				}
				else
				{
					printf("tree element insertion unsuccessful\n");
				}
				break;
			}
			case 2:
			{
				printf("Enter the data to delete\n");
				scanf("%d",&data);
				status = inorder_tree_del(&root, data);
				if(status == DATA_NOT_FOUND)
				{
					printf("data not found\n");
				}

			}
			case 7:
			{
				//dprint_slist(head,data);
				inorder(root);
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
