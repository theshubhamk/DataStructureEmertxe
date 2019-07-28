#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
#define SIZE 5
typedef struct node
{
	data_t data[SIZE];
	int top;	
}s_array;

enum status
{
	STACK_OVERFLOW,
	SUCCESS,
	STACK_UNDERFLOW,
	DATA_NOT_FOUND
};

int PUSH(s_array *s, data_t data);
int POP(s_array *s, data_t *data);
//int PEAK(s_array *s, data_t *data);
int PEEP(s_array s);
int isfull(int top);
int isempty(int top);
int PEAK(s_array *s, data_t *data);
#endif