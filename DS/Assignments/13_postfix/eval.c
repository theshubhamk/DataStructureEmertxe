#include "common.h"

float evaluation(float op1, float op2, char operator)
{
	switch(operator)
	{
		case '+':
		{
			return op1 + op2;
		}
		case '-':
		{
			return op1 - op2;
		}
		case '*':
		{
			return op1 * op2;
		}
		case '/':
		{
			return op1 / op2;
		}
		case '^':
		{
			return pow(op1,op2);
		}
	}
}