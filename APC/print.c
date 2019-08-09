#include "common.h"

void print_slist(slist *head)
{	
	//validation if the list empty or not
	slist *temp;
	temp = head;
	if(head == NULL)
	{
		printf("List empty\n");
	}
	//else if list elemets exits then print them one by one
	else
	{
		//printf("List elements exist\n");
		//itirate thru the list
		/*
		while(temp)
		{
			printf("%d-----> ",temp->data);
			temp = temp->link;
		}*/
		//int data = (temp->data);
		printf("%d", temp->data);
		temp = temp->link;
		while(temp)
		{
			int num = temp->data, i = 3;
			//	printf("flag = %d\n", flag);

			//if (num < 0)
			/*if (flag == 2)
			{
				printf("%d", num);
				head = head->link;
				flag--;
				continue;
			}*/
			char a[4] = "0000"; 
			//converting itoa
			//loop will run num != 1 
			while (num)
			{
				int	digit = num % 10;
				a[i] = digit + '0';
				i--;
				num = num / 10;
			}
			//Display the result 
			printf("%s", a);
			//incrment the head and  points to the next node
			temp = temp->link;
		}

	}
}