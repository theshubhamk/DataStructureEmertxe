#ifndef COMMON_H
#define COMMON_H
//define all the header files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

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

void infix_postfix(char infix[], char postfix[]);
int in_preced(char symbol);
int st_preced(char symbol);
float post_fix_eval(char postfix[]);
float evaluation(float op1, float op2, char operator);
#endif