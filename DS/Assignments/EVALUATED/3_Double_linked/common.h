#ifndef COMMON_H
#define COMMON_H
//define the header files
#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *next;
	struct node	*prev;	
}dlist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};

//function definition
int insert_first(dlist **head, dlist **tail, data_t data);
void print_dlist(dlist *head);

int insert_last(dlist **head, dlist **tail, data_t data);
int delete_first(dlist **head, dlist **tail);
int delete_last(dlist **head, dlist **tail);
int delete_list(dlist **head);

#endif