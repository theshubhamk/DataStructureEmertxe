#include "common.h"

void inorder(tree_t *root)
{
	if(root)
	{
		inorder(root->LC);
		printf("%d\n", root->data);
		inorder(root->RC);
	}
}