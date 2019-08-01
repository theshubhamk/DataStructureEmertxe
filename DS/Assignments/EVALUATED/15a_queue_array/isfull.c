#include "common.h"
//this function checks if the queue is full or not. if it is full , it will return 1.
int isfull(int top)
{
	if(top == (SIZE - 1))
	{
		return 1;
	}
	return 0;
}