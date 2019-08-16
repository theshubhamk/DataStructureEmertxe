#include "common.h"

int search_db(hash_t array[], char * word_out)
{
	char first_letter;
	int index;
	int ascii_val;

	if(isupper(word_out[0]))	
	{
		first_letter = tolower(word_out[0]);
		//printf("%c\n",first_letter );
	}
	else
	{
		first_letter = word_out[0];
		//printf("%c\n",first_letter );
	}
	if(isdigit(word_out[0]))
	{
		index = word_out[0] - 48;
	}
	else
	{
		ascii_val = first_letter - 97;
		printf("%s\n",word_out);
		index =  ascii_val % SIZE;	
	}

	int i;
	hash_t *temp;
	dulist *temp1;
	int flag = 0;
	//for (i = 0; i < SIZE; i++)
		temp = &array[index];//.word_link;
		if(strcmp(temp->word,"#") == 0)
		{
			return FAILURE;	
		}
		//printf("index: %d\t", index);
			//	printf("num of files: %d\t",temp->no_of_files);
		while(temp)
		{
			if(strcmp(temp->word,word_out) == 0)
			{	
				printf("The word ");
				printf("'%s' is in %d files ", temp->word, temp->no_of_files);
				temp1 = temp->tab_link;
				while(temp1)
				{	
					printf(" '%s', ", temp1->file_name);
					printf("appearing %d times \t", temp1->wcnt);
					temp1 = temp1->dlink;
				}
				printf("\n");
				return SUCCESS;
			}
			temp = temp->word_link;
		}
	return FAILURE;	
}

