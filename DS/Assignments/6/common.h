#ifndef COMMON_H
#define COMMON_H
//header files
#include <stdio.h>
#include <stdlib.h>
//define struct
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;	
}slist;
//define the outputs
enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};
//declare the functions
int insert_sorted(slist **head, data_t data);
int find_loop(slist **head);
int create_loop(slist **head);

int insert_at_first(slist **head, data_t data);
void print_slist(slist *head);


#endif