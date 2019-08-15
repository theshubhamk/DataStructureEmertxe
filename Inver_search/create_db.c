#include "common.h"

int create_database(hash_t table[SIZE],char * word_out, char *filename)
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
	
	printf("\nindex : = %d\n", index);

	hash_t *temp1stLL = NULL, *head1stLL = NULL;
	dulist *temp2ndLL = NULL, *head2ndLL = NULL;
	temp1stLL = &table[index];

	temp2ndLL = temp1stLL->tab_link;

	head1stLL = &table[index];
	head2ndLL = temp2ndLL;
	//while(temp1stLL->word_link)
	//{
	//	temp1stLL = temp1stLL->word_link;
	//}

	//int num_of_files = temp1stLL->no_of_files;
	//if(num_of_files != 0)
	//{

	//}
	
	/*int num_of_files = temp1stLL->no_of_files;
	while(temp2ndLL)
	{
		num_of_files++;
		temp2ndLL = temp2ndLL->dlink;
	}*/
	/*
	//rintf("hhhhhhhhhhhhhh%s\n", head1stLL->word );
	//if(temp1stLL->word != NULL)
	//if (strcmp(table[index].word, "#") == 0)
	{
		printf("BEfhead after inserta at last :%s\n",head1stLL->word);
		insert_at_lastLL1(&head1stLL, num_of_files,  word_out);
		printf("AFRhead after inserta at last :%s\n",head1stLL->word);
		table
	}*/
	//printf("the 1stLL is:\n");
	//fin_printt(head1stLL);

	char * my_str = (char *)malloc(sizeof(char) * 100);
	strcpy(my_str, word_out);
	hash_t *temp1 = &table[index];
	int flag = 0;


	dulist *temp2 = head2ndLL;
	char * my_file_name = (char *)malloc(sizeof(char) * 100);
	strcpy(my_file_name, filename);
	//int wc = 0;
	//temp2->wc 
	if (strcmp(temp1->word, "#") == 0)
	{
		dulist *newnew = malloc(sizeof(dulist));
		if (newnew == NULL)
		{
			return FAILURE;
		}
		//2nd LL
		newnew->file_name = my_file_name;
		newnew->wcnt = 1;
		newnew->dlink = NULL;
		temp2 = newnew;
		//1st LL
		temp1->word = my_str;
		temp1->no_of_files = 1;
		temp1->word_link = NULL;
		temp1->tab_link = temp2;
	
		return SUCCESS;


		//temp1->value = data;
	}
	else
	{
		hash_t *temp1 = &table[index];
		dulist *temp2;// = temp1->tab_link;
		while(temp1)
		{
			if(strcmp(temp1->word, word_out) == 0)
			{
				temp2 = temp1->tab_link;
				while(temp2)
				{
					//increment the file count
					if(strcmp(temp2->file_name, my_file_name) == 0)
					{
						//temp1->no_of_files == temp1->no_of_files + 1;
						printf("sddsbhj\n");
						temp2->wcnt = temp2->wcnt + 1;
						return SUCCESS;
					}
					else if(temp2->dlink != NULL)
					{
						temp2 = temp2->dlink;
					}
					//if(temp2->dlink != NULL)
					else
					{
						//if data match is found create one new node in 2nd LL
						dulist *new1 = malloc(sizeof(dulist));
						if (new1 == NULL)
						{
							return FAILURE;
						}
						temp1->no_of_files = temp1->no_of_files + 1;
						new1->file_name = my_file_name;
						new1->wcnt = 1;//temp2->wcnt + 1;
						new1->dlink = NULL;

						dulist *temp3 = temp1->tab_link;
						if (temp3 == NULL)
						{
							temp3 = new1;
							return SUCCESS;
						}
						else
						{
							while(temp3->dlink != NULL)
							{
								temp3 = temp3->dlink;
							}
							temp3->dlink = new1;
							return SUCCESS;
						}
					}

					
				}
			}
			else if(temp1->word_link != NULL)
			{
				temp1 = temp1->word_link;
			}
			else
			{
						//2nd LL node
						dulist *new1 = malloc(sizeof(dulist));
						if (new1 == NULL)
						{
							return FAILURE;
						}

						new1->file_name = my_file_name;
						new1->wcnt = 1;//temp2->wcnt + 1;
						new1->dlink = NULL;
						head2ndLL = new1;

				//if data doent match create a new node in 1st LL
				hash_t *new = malloc(sizeof(hash_t));
				if (new == NULL)
				{
					return FAILURE;
				}

				new->word = my_str;
				new->no_of_files = 1;
				new->word_link = NULL;
				new->tab_link = head2ndLL;

				hash_t *temp = &table[index];
				if (temp == NULL)
				{
					temp = new;
					return SUCCESS;
				}
				else
				{
					while(temp->word_link != NULL)
					{
						temp = temp->word_link;
					}
					temp->word_link = new;
					return SUCCESS;
				}
				break;
			}
			//if(temp1->word_link == NULL)
			//{
			//	break;
			//}
		//	temp1 = temp1->word_link;
		}
		//temp1 is updated to that location
		//Create node
		
	}
	//print_table(table);
	return SUCCESS;
}
