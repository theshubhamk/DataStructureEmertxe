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

//declare the functions
int insert_first(dlist **head, dlist **tail, data_t data);
void print_dlist(dlist *head);

int insert_after(dlist **head, dlist **tail, data_t n_data, data_t g_data);
int insert_before(dlist **head, dlist **tail, data_t n_data, data_t g_data);
int delete_element(dlist **head, dlist **tail, data_t n_data);

#endif