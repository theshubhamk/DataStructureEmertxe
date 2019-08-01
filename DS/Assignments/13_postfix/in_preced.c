#include "common.h"

int in_preced(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
			{
				return 1;
			}
		case '*':
		case '/':
			{
				return 3;
			}
		case '^':
			{
				return 6;
			}
		case ')':
			{
				return 0;
			}
		case '(':
			{
				return 9;
			}
		default:
			{
				return 7;
			}
	}
}