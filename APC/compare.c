#include "common.h"

int compare(slist **headnum1, slist **headnum2)
{
	reverse(&(*headnum1));
	reverse(&(*headnum2));
	//printf("num1: \n");
		//		print_slist((*headnum1));
		//		printf("\n");
			//	printf("num2: \n");
			//	print_slist((*headnum2));
	slist *temp, *temp1, *temp2, *temp0;
	temp1 = *headnum1;
	temp2 = *headnum2;
	int no_of_nodes1 = 0, no_of_nodes2 = 0, flag = 0, count, tempCount;
	while(temp1)
	{
		no_of_nodes1++;
		temp1 = temp1->link;
	}
	while(temp2)
	{
		no_of_nodes2++;
		temp2 = temp2->link;
	}
	//
	printf("%d %d\n", no_of_nodes1, no_of_nodes2);
	if(no_of_nodes1 == no_of_nodes2)
	{
		count = no_of_nodes1;
		printf("ct :%d\n", count );
		temp1 = *headnum1;
		temp2 = *headnum2;
		tempCount = count;
		while(tempCount)
		{
			temp1 = *headnum1;
			temp2 = *headnum2;
			while(count-1)
			{
				temp1 = temp1->link;
				temp2 = temp2->link;
				count--;
			}
			if(temp1->data < temp2->data)
			{
				temp1 = *headnum2;
				temp2 = *headnum1;
				flag = 1;
				break;
			}
			else if(temp1->data > temp2->data)
			{
				temp1 = *headnum1;
				temp2 = *headnum2;
				break;
			}
			else
			{
				count = tempCount - 1;
			}
			tempCount = count;
		}
		
	}
	else if(no_of_nodes1 < no_of_nodes2)
	{
		flag = 1;
		temp1 = *headnum2;
		temp2 = *headnum1;
	}
	else
	{
		temp1 = *headnum1;
		temp2 = *headnum2;
	}
	reverse(&(*headnum1));
	reverse(&(*headnum2));
	printf("flag comp: %d\n",flag );
	return flag;
}