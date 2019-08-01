#include "common.h"

void infix_postfix(char infix[], char postfix[])
{
	char stack[20];
	stack[0] = '#';
	int top = 0;
	int j = 0,i;
	for(i = 0;infix[i];i++)
	{
		/*
		while(st_preced(stack[top]) > in_preced(infix[i]))
		{
			postfix[j] == stack[top];
			top--;
			j++;
		}
		if(in_preced(infix[i]) != st_preced(stack[top]))
		{
			top++;
			stack[top] = infix[i];
		}
		*/
		if(in_preced(infix[i]) > st_preced(stack[top]))
		{
			top++;
			stack[top] = infix[i];
		}
		else if(in_preced(infix[i]) < st_preced(stack[top]))
		{
			postfix[j] = stack[top];
			top--;
			j++;
			i--;
		}
		else
		{
			top--;
		}
	}
	while(stack[top] != '#')
	{
		postfix[j] = stack[top];
		j++;
		top--;
	}
	postfix[j] = '\0';
}