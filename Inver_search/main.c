#include "common.h"

int main(int argc, char *argv[])
{
	//---------------------------------------------------------------------------------------
	slist *head_file_list = NULL;
	if(argc == 1)
	{
		printf("Enter the CLA\n");
		exit(0);
	}
	//find duplicates while the files are entered from cmd line. THIS IS THE CASE FOR 1ST RUN.
	for (int i = 1; i <= argc-2; i++)
	{
		for (int j = i+1; j <= argc-1; j++)
		{
			//if(argv[i] == argv[j])
			if(strcmp(argv[i],argv[j]) == 0)
			{
				printf("Do not input duplicate files. Files entered must be unique\n");
				exit(1);
			}
		}
	}
	//if the files are diffrent then store their names to a linked list
	//create a linked list for storing the file names.
	for (int i = 1; i < argc; i++)
	{
		insert_at_first(&head_file_list,argv[i]);
	}
	/*
	//find duplicates
	slist *temp = *head_file_list;
	slist *temp1 = temp->link;
	i = 1;
	while(temp->link)
	{
		//for (int j = i+1; j <= argc-1; j++)
		while(temp1)
		{
			if(temp->inp_file_name == temp1->inp_file_name)
			{

				printf("Do not input duplicate files.Files entered must be unique\n");
				exit(1);
			}
			temp1 = temp1->link;
		}
		temp = temp->link;
		temp1 = temp->link;
	}*/

	//---------------------------------------------------------------------------------------------
	/*int count = argc;
	FILE *fp, *fs;
	i = 1;
	hash_t array[SIZE];
	while(i != count)
	{
		fs = fopen(argV[1],"rb");
		while(fscanf(fs, "%s", word_out) != EOF)
		{
			create_database(hash_t table[], data_t word_out)
		}
		//check if fs is pointing to a non empty file
		if(fs == NULL)
		{
			perror(argV[1]);
			exit(1);
		}
	}*/
	dulist *tabhead = NULL;
	hash_t table[SIZE];

	int i;
	for(i = 0;i < SIZE;i++)
	{
		table[i].word = (char *)malloc(sizeof(char)*100);
		table[i].word = "#";
		table[i].no_of_files = 0;
		table[i].word_link = NULL;
		table[i].tab_link = NULL;
	}
	char *newfile = (char *)malloc(sizeof(char) * 100);
	while(1)
	{
		int opt;
		printf("\nChoose the opteration to perform\n1.create Database\n7.print database\n3.Update database\n4.search in database\n5.save database\n6.exit\n");
		scanf("%d",&opt);

		switch(opt)
		{
			case 1:
			{
				FILE *fs;
				hash_t array[SIZE];
				char * word_out = (char *)malloc(sizeof(char) * 100);
				if(head_file_list == NULL)
				{
					int count = argc;
					printf("%d\n",count );
					i = 1;
					while(i < count)
					{
						fs = fopen(argv[i],"r");
						//check if fs is pointing to a non empty file
						if(fs == NULL)
						{
							perror(argv[i]);
							exit(1);
						}

						//give the condiotion here to check for word_out[0] !=  special symbol;
						//exit saying special char present at the start;
						while(fscanf(fs, "%s", word_out) != EOF)
						{
							create_database(table, word_out, argv[i]);
						}
						fclose(fs);
						i++;
					}
				}
				else
				{
					slist *write = head_file_list;
					while(write)
					{
						fs = fopen(write->inp_file_name,"r");
						//check if fs is pointing to a non empty file
						if(fs == NULL)
						{
							perror(write->inp_file_name);
							//exit(1);
							break;
						}

						//give the condiotion here to check for word_out[0] !=  special symbol;
						//exit saying special char present at the start;
						while(fscanf(fs, "%s", word_out) != EOF)
						{
							create_database(table, word_out, write->inp_file_name);
						}
						fclose(fs);
						write = write->link;
					}
				}
				//print_table(table);
				break;
			}
			case 2:
			{

				break;
			}
			case 3:
			{
				FILE *fs;
				printf("Enter the file name\n");
				scanf("%s",newfile);
				getchar();
				char * word_out = (char *)malloc(sizeof(char) * 100);
				//int status = find_file_dupli(&head_file_list, *argv, argc);
				int status = find_file_dupli(&head_file_list, newfile);//, argc);
				if(status == FAILURE)
				{
					printf("Do not input duplicate files.Files entered must be unique\n");
				}
				else
				{
					fs = fopen(newfile,"r");
					//check if fs is pointing to a non empty file
					printf("crecre\n");
					if(fs == NULL)
					{
						perror(newfile);
						break;
						//exit(1);
					}
					else
					{
						while(fscanf(fs, "%s", word_out) != EOF)
						{
							create_database(table, word_out, newfile);
						}
						insert_at_first(&head_file_list,newfile);
					}
					fclose(fs);
					//update_db();
				}
				break;
			}
			case 4:
			{
				int status;
				char * wordd = (char *)malloc(sizeof(char) * 100);
				printf("Enter the term to search: \t");
				scanf("%s", wordd);
				status = search_db(table, wordd);
				if(status == FAILURE)
				{
					printf("data not found in the database\n");
				}
				break;
			}
			case 5:
			{
				save_db(table);
				break;
			}
			case 6:
			{
				exit(2);
				break;
			}
			case 7:
			{
				print_table(table);
				//fin_printt(table);
				printt(head_file_list);
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}