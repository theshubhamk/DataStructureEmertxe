#ifndef COMMON_H
#define COMMON_H
//define all the header files
#include <stdio.h>
#include <stdlib.h>

//typedef int data_t;
//define the size of the stack

enum status
{
	INDEX,
	SUCCESS,
	DATA_NOT_FOUND,
	FAILURE
};
//declare all the functions

int qiksort(int arr[], int first, int last);
int partition(int arr[], int first, int	last);
#endif