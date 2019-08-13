#include "common.h"

int find_file_dupli(slist **head_file_list, char_t newfile)//, int argc)
{
	slist *temp = *head_file_list;
	int i = 1;
	//printf("%s\n",newfile );
	//for (i = 1; i <= argc-1; i++)
	{
		//temp = *head_file_list;
		while(temp)
		{
			//if(temp->inp_file_name == argv[i])
			//if(strcmp(temp->inp_file_name,&argv[i]) == 0)
			if(strcmp(temp->inp_file_name,newfile) == 0)
			{
				printf("Do not input duplicate files.Files entered must be unique\n");
				return FAILURE;
			}
			temp = temp->link;
		}
	}
	return SUCCESS;
}