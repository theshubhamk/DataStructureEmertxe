#ifndef COMMON_H
#define COMMON_H
//define all the header files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
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

int merge(int arr[], int first, int	last, int mid);
void msort(int arr[], int first, int last);

#endif