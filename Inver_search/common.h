#ifndef COMMON_H
#define COMMON_H
//header files
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <string.h>
#define _GNU_SOURCE

#define SIZE 26
//define struct
typedef char * char_t;
//the below struct defines a new linked list linked to the bigger linked list. the below linked list is created when any duplicates are founde in the file.
typedef struct dupli_list
{
	char_t file_name;
	int wcnt;
	struct dupli_list *dlink;
}dulist;

//the below struct is to 
typedef struct hash
{
	//int index;
	char_t word;
	int no_of_files;
	struct hash *word_link;	
	struct dupli_list *tab_link;
}hash_t;

//the below linked list is to check if the CLI has files with the same name. if same name files are found we need to exit.
typedef char data_t;
typedef struct node
{
	char_t inp_file_name;
	struct node *link;	
}slist;

//define the outputs
enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DUPLICATE_FOUND
};
//declare the functions
int insert_at_first(slist **head_file_list, char_t data);
int find_file_dupli(slist **head_file_list, char_t newfile);//, int argc);
int create_database(hash_t table[],char * word_out, char argv[]);
void printt(slist *head);
#endif