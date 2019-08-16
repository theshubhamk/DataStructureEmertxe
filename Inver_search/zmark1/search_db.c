#include "common.h"

int search_db(hash_t array[], char * word_out)
{
	int i;
	hash_t *temp;
	dulist *temp1;
	int flag = 0;
	for (i = 0; i < SIZE; i++)
	{
		temp = &array[i];//.word_link;
		if(strcmp(temp->word,"#") == 0)
		{
			continue;	
		}
		else if(strcmp(temp->word,word_out) == 0)
		{
	
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
		else
		{
			flag = 1;
			continue;
		}
	}
	if(flag == 1)
	{
		printf("fasfas\n");
		return FAILURE;
	}
	return SUCCESS;	
}

