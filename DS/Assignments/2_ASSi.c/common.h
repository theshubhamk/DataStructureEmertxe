#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;	
}slist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};


int insert_at_first(slist **head, data_t data);
void print_slist(slist *head);

int insert_after(slist **head, data_t n_data, data_t g_data);
int delete_element(slist **head, data_t n_data);

#endif