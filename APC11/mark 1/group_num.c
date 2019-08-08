#include "common.h"

int group_num(slist **head, int *num, int length)
{
	int i = length - 1, data, count = length;
	int mask;
		while (count > 0)
		{
			int k = 0;
			data = 0;
			mask = 1;

			if (count <= 4)
			{
				for ( ; i >= 0; i--)
				{
					data = data + num[i] * mask; 
					mask *= 10;

				}
				//	data =  (data * 10) + num[i];
				//	data = reverse_data(data);
					insert_node(head, data);
					break;
			}

			for ( ; i >= 0; i--)
			{
				//mask = 1;
				if (k < 4 )
					{
						data =  data + num[i] * mask;
						k++;
						mask *= 10;
						continue; 
					}
				//	data = reverse_data(data);
					printf("%d\n", data);
					insert_node(head, data);
					break;
			}
			count -= 4;
	}
}