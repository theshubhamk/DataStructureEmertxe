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
}slist;
//define the outputs
enum status
{
	STACK_UNDERFLOW,
	SUCCESS,
	STACK_OVERFLOW,
	DATA_NOT_FOUND
};
//declare the functions

int PUSH(slist **top, data_t data);
int POP(slist **top, data_t *data);
int PEAK(slist **top, data_t *data);
void PEEP(slist *top);

#endif