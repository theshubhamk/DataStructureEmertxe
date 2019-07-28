#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
#define SIZE 5
typedef struct node
{
	data_t data[SIZE];
	int front, rear, count;	
}cq_array;

enum status
{
	Q_EMPTY,
	SUCCESS,
	Q_FULL,
	DATA_NOT_FOUND
};

int CENQ(cq_array *q, data_t data);
int CDEQ(cq_array *q, data_t *data);

//int isfull(int top);
//int isempty(int top);
int print(cq_array q);
#endif