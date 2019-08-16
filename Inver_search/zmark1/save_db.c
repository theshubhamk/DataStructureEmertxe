#include "common.h"

int save_db(hash_t array[])
{
	FILE *fs;
	fs = fopen("backup.txt","w");
	//check if fs is pointing to a non empty file
	if(fs == NULL)
	{
		perror("backup.txt");
		exit(1);
	}

    int i;
	hash_t *temp;
	dulist *temp1;
	for (i = 0; i < SIZE; i++)
	{
		//	printf("hi\n");
		temp = &array[i];//.word_link;
		if(strcmp(temp->word,"#") == 0)
		{
			continue;	
		}
		fflush(stdin);
		fprintf(fs, "index: %d\t", i);
		//	printf("num of files: %d\t",temp->no_of_files);
		fprintf(fs, "value: ");
		while(temp)
		{	
			fprintf(fs, "%s -FC-- %d\t", temp->word, temp->no_of_files);
			temp1 = temp->tab_link;
			while(temp1)
			{	
				fprintf(fs, "File names: %s\t", temp1->file_name);
				fprintf(fs, "Word count: %d \t", temp1->wcnt);
				temp1 = temp1->dlink;
			}
			temp = temp->word_link;
		}

		fprintf(fs, "\n");
	}
	fclose(fs);
	return SUCCESS;

}