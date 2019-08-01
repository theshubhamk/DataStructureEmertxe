#include "common.h"

float post_fix_eval(char postfix[])
{
	float stack[20];
	int top = -1, i;
	for(i = 0;postfix[i];i++)
	{
		if(isdigit(postfix[i]))
		{
			top++;
			stack[top] = postfix[i] - 48;
		}
		else
		{
			int op2 = stack[top--];
			int op1 = stack[top--];
			stack[++top] = evaluation(op1, op2, postfix[i]);
		}
	}
	return stack[0];
}