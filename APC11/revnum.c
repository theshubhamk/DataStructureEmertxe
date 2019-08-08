#include "common.h"

int rev(int n_data)
{
	int num = n_data, rev = 0, rem;
	while(num)
	{
		rem = num % 10;
		rev	= (rev * 10) + rem;
		num = num / 10;
	}
	return rev;
}