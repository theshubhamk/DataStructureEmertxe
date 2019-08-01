#include "common.h"

int isfull(int top)
{
	//the function checks the top location. if its equal to size -1 then the queue is full.
	if(top == (SIZE - 1))
	{
		return 1;
	}
	return 0;
}