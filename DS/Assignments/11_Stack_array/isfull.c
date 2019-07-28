#include "common.h"

int isfull(int top)
{
	if(top == (SIZE - 1))
	{
		return 1;
	}
	return 0;
}