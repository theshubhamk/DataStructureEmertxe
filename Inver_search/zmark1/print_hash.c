#include "common.h"

int print_table(hash_t array[])
{
	int i;
	hash_t *temp;
	for (i = 0; i < SIZE; ++i)
	{
		temp = array[i].link;

		printf("index: %d value: %d ", array[i].index, array[i].value);

		while(temp)
		{
			printf("value: %d ", temp->value);
			temp = temp->link;
		}

		printf("\n");
	}
	return SUCCESS;
}