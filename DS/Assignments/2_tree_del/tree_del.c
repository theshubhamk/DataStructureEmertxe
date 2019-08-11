#include "common.h"

int inorder_tree_del(tree_t **root, data_t data)
{
	if((*root))//->LC->LC || (*root)->LC->RC || (*root)->RC->RC || (*root)->RC->LC )
	{
		inorder_tree_del(&((*root)->LC), data);
		if((*root)->LC == NULL && (*root)->RC == NULL && (*root)->data == data) //|| ((*root)->RC->LC == NULL && (*root)->RC->RC == NULL)) && ((*root)->data == data))
		{
			free((*root));
			//(*root)->LC = NULL;
		}
		/*else if((*root)->data == data)
		{
			free((*root));
		}
		else
		{
			return DATA_NOT_FOUND;
		}*/
		inorder_tree_del(&((*root)->RC), data);
	}
}