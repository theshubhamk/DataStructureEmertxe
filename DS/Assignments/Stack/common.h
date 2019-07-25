#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
#define SIZE 5;
typedef struct node
{
	data_t data[SIZE];
	int top;	
}dlist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};


int insert_first(dlist **head, dlist **tail, data_t data);
void print_dlist(dlist *head);

int insert_last(dlist **head, dlist **tail, data_t data);
int delete_first(dlist **head, dlist **tail);
int delete_last(dlist **head, dlist **tail);
int delete_list(dlist **head);

#endif