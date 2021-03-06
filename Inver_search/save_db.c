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
		while(temp)
		{	
			fprintf(fs, "\nThe word ");
			fprintf(fs, "'%s' is in %d files: ", temp->word, temp->no_of_files);
			temp1 = temp->tab_link;
			while(temp1)
			{	
				fprintf(fs, "\n\t\t\t    '%s', ", temp1->file_name);
				fprintf(fs, "appearing %d times\n", temp1->wcnt);
				temp1 = temp1->dlink;
			}
			temp = temp->word_link;
		}
		fprintf(fs, "****************************************************************************************");
		//fprintf(fs, "-----------------------------------------------------------------------------------------------------------------");
	}
	fclose(fs);
	return SUCCESS;

}