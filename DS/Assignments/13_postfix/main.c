#include "common.h"

int main()
{
	//declare the vars
	char *infix = malloc(sizeof(char) * 100);
	char *postfix = malloc(sizeof(char) * 100);
	//validation
	if(infix == NULL || postfix == NULL )
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
	printf("Enter the infix elements of the array\n");
	for(i = 0;i < size;i++)
	{
		scanf("\n%c",&infix[i]);
	}
	while(1)
	{
		//prompt + read user
		printf("\nEnter the option\n1.postfix\n2.prefix\n3.exit\n");
		scanf("%d", &opt);
		printf("\n");

		switch(opt)
		{
			//push the data onto the stack
			case 1:
			{
				//call the function
				infix_postfix(infix,postfix);
				printf("The postfix expression is \n");
				for(i = 0;i < size;i++)
				{
					printf("%c",postfix[i]);
				}
				printf("The eval is:\n");
				printf("%f",post_fix_eval(postfix));
				break;
			}
			case 2:
			{
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
