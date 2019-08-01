#include "common.h"
//check if the stack is full and if full then return 1
int isfull(int top)
{
	if(top == (SIZE - 1))
	{
		return 1;
	}
	return 0;
}