#include "common.h"

int PEEP(s_array s)
{
	if(isempty(s.top))
	{
		return STACK_UNDERFLOW;
	}
	s.top = SIZE-1;
	printf("The stack is :\n");
	while(s.top != -1)
	{
		printf("%d\n",s.data[s.top]);
		(s.top)--;
	}
	return SUCCESS;

}