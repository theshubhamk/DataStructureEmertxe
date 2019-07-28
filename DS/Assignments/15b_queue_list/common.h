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
}qlist;
//define the outputs
enum status
{
	Q_EMPTY,
	SUCCESS,
	Q_FULL,
	DATA_NOT_FOUND
};
//declare the functions
int ENQ(qlist **front, data_t data);
int DEQ(qlist **front, data_t *data);
void print(qlist *front);

/*
int insert_at_last(slist **head, data_t data);
int insert_at_first(slist **head, data_t data);
void print_slist(slist *head);

int delete_last(slist **head);
int delete_first(slist **head);
int delete_list(slist **head);
int find_node(slist *head, data_t data, int num);
int insert_after(slist **head, data_t n_data, data_t g_data);
int delete_element(slist **head, data_t n_data);
*/

#endif