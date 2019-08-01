#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
//define the size
#define SIZE 5
typedef struct node
{
	//declare the array of size 
	data_t data[SIZE];
	//declare the vars
	int front, rear, count;	
}cq_array;

enum status
{
	Q_EMPTY,
	SUCCESS,
	Q_FULL,
	DATA_NOT_FOUND
};
//define the functions
int CENQ(cq_array *q, data_t data);
int CDEQ(cq_array *q, data_t *data);
int print(cq_array q);

#endif