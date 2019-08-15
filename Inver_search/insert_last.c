#include "common.h"

int insert_at_lastLL1(hash_t **head,int num_of_files, char_t data)
{
	//create node
	hash_t *temp = malloc(sizeof(hash_t));
	//validation
	if(temp == NULL)
	{
		return FAILURE;
	}
	//update node values i.e we are making a node with data and link. since its gonna be the last node so we assign the link value as NULL
	temp->word = data;
	temp->no_of_files = num_of_files;
	temp->word_link = NULL;
	temp->tab_link = NULL;//tabhead;//CORRECT AT THIS PLACE
	//check if the list is empty or not
	//if the head is empty i.e there are no nodes then we assign the temp node to head.
	printf("inside inserta at last :%s\n",temp->word);
	if(strcmp((*head)->word,"#") == 0)// "#")
	{
		printf("new\n");
		*head = temp;//this assignment means both the structure and content(i.e link and data is copied in the head node i.e head becomes same as temp)
		printf("head after inserta at last :%s\n",(*head)->word);
		temp = NULL;
		free(temp);
	}
	else
	{
		printf("old\n");
		hash_t *temp1 = *head;//we create a new pointer i.e basically a node or a node pointer to point at head or to contain head.
		//we will use this temp1 to transvers thru' the list.
		while(temp1->word_link != NULL)
		{
			temp1 = temp1->word_link;
		}
		temp1->word_link = temp;//when the temp1 is pointing to the last node after the loop then we simply copy(assign) the temp node that we created earlier to this last node i.e temp1.
		temp = NULL;
		free(temp);
	}
	return SUCCESS;

	/*printf("%s\n",word_out);
	if(ascii_val < 26)
	{
		index =  ascii_val % SIZE;
	}
	printf("\nindex : = %d\n", index);*/
}