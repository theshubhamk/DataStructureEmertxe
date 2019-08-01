#include "common.h"

int st_preced(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
			{
				return 2;
			}
		case '*':
		case '/':
			{
				return 4;
			}
		case '^':
			{
				return 5;
			}
		case '#':
			{
				return -9;
			}
		case '(':
			{
				return 0;
			}
		default:
			{
				return 8;
			}
	}
}