#include "common.h"

int create_database(hash_t table[],char * word_out, char argv[])
{
	char first_letter;
	int index;
	int ascii_val;
	if(isupper(word_out[0]))	
	{
		first_letter = tolower(word_out[0]);
		printf("%c\n",first_letter );
	}
	else
	{
		first_letter = word_out[0];
		printf("%c\n",first_letter );
	}
	ascii_val = first_letter - 96;

	index =  ascii_val % SIZE;
	printf("index : = %d\n", index);

	return SUCCESS;
}
