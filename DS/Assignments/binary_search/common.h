#ifndef COMMON_H
#define COMMON_H
//define all the header files
#include <stdio.h>
#include <stdlib.h>

//typedef int data_t;
//define the size of the stack
/*
#define SIZE 5
typedef struct node
{
	data_t data[SIZE];
	int top;	
}s_array;
*/
enum status
{
	INDEX,
	SUCCESS,
	DATA_NOT_FOUND,
	FAILURE
};
//declare all the functions

int binary_search(int *arr, int size, int key);
int bubb_sort(int *arr, int size);
int binary_search_recursive(int *arr, int first, int last, int key);
int sort_sel(int *arr, int size);
void print(int *arr, int size);
int sort_ins(int *arr, int size);
/*
int PUSH(s_array *s, data_t data);
int POP(s_array *s, data_t *data);
int PEEP(s_array s);
int isfull(int top);
int isempty(int top);
int PEAK(s_array *s, data_t *data);
*/
#endif