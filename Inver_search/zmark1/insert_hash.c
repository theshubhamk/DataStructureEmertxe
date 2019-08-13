#include "common.h"

int hash_insert(hash_t a[], data_t data)
{
	int hash_index = data % SIZE;
	if(a[hash_index].data == -1)
}