#ifndef COMMON_H
#define COMMON_H
//header files
#include <stdio.h>
#include <stdlib.h>

//define struct
typedef int data_t;
typedef struct tree
{
	data_t data;
	struct tree *LC;
	struct tree *RC;	
}tree_t;
//define the outputs
enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DUPLICATE_FOUND
};
//declare the functions
int bst_insert(tree_t **root, data_t data);
void inorder(tree_t *root);
#endif