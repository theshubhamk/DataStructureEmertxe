#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
#define SIZE 5
typedef struct node
{
	data_t data[SIZE];
	int front, rear;	
}q_array;

enum status
{
	Q_EMPTY,
	SUCCESS,
	Q_FULL,
	DATA_NOT_FOUND
};

int ENQ(q_array *q, data_t data);
int DEQ(q_array *q, data_t *data);

//int isfull(int top);
//int isempty(int top);
int print(q_array q);
#endif