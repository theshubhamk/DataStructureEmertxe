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

#endif