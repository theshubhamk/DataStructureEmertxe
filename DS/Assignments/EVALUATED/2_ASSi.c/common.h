#ifndef COMMON_H
#define COMMON_H
//declare the header files
#include <stdio.h>
#include <stdlib.h>
//define the struct
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;	
}slist;
//declare the outputs
enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND,
	OUT_OF_RANGE
};

//declare the functions
int insert_at_first(slist **head, data_t data);
void print_slist(slist *head);

int insert_after(slist **head, data_t n_data, data_t g_data);
int insert_before(slist **head, data_t n_data, data_t g_data);
int delete_element(slist **head, data_t n_data);
int insert_nth(slist **head, data_t g_data, int n);

#endif