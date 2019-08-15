#include "common.h"

int print_table(hash_t array[])
{
	int i;
	hash_t *temp;
	dulist *temp1;
	for (i = 0; i < SIZE; i++)
	{
		temp = &array[i];//.word_link;
		if(strcmp(temp->word,"#") == 0)
		{
			continue;	
		}
		printf("index: %d\t", i);
		//	printf("num of files: %d\t",temp->no_of_files);
		printf("value: ");
		while(temp)
		{	
			printf("%s -FC-- %d\t", temp->word, temp->no_of_files);
			temp1 = temp->tab_link;
			while(temp1)
			{	
				printf("File names: %s\t", temp1->file_name);
				printf("Word count: %d \t", temp1->wcnt);
				temp1 = temp1->dlink;
			}
			temp = temp->word_link;
		}

		printf("\n");
	}
	return SUCCESS;
}