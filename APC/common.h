#ifndef COMMON_H
#define COMMON_H
//header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	FLAG,
	DATA_NOT_FOUND
};
//declare the functions
int insert_sorted(slist **head, data_t data);
int subtract_nodes(slist **headnum1, slist **headnum2, slist **headsum);

int make_group(slist **headnum1, data_t *num1, int length1);

int make_group2(slist **headnum2, data_t *num2, int length2);
int insert_at_first(slist **head, data_t data);
void print_slist(slist *);
int rev(int n_data);
int reverse(slist **head);
int sum_nodes(slist **headnum1, slist **headnum2, slist **headsum);
int mull(slist **headnum1, slist **headnum2, slist **headsum);
void printt(slist *head);

#endif