#include "common.h"

unsigned long long int divI(slist **headnum1, slist **headnum2)
{
	slist *tempRack = *headnum1, *resTemp ;//= NULL; 
	unsigned long long int count = 0;
	int status, comp;

	/*printf("headnum1 before compare is:============\t");
			printt(tempRack);
	//status = compare(headnum1, headnum2);
			printf("num1: \n");
				print_slist((*headnum1));
				printf("\n");
				printf("num2: \n");
				print_slist((*headnum2));*/
	status = compare(headnum1, headnum2);

	if(status == 1)
	{
		return 0;
	}

	printf("OUT\n");

	while(1)
	{
		printf("INSD\n");
		printf("tempRack OUT is:============\t");
		printt(tempRack);
		printf("\n");

		comp = compare(&tempRack,headnum2);
		printf("comp : ------------------------------- %d \n",comp );

		printf("\n");
		printf("headnum2 after IN compare is:============\t");
		printt(*headnum2);
		printf("\n");

		if(comp == 0)
		{
			printf("tempRack before sub is:============\t");
			printt(tempRack);
			printf("headnum2 before sub:============\t");
			printt(*headnum2);
			printf("\n");
			//subtract_nodes(&tempRack,headnum2, &resTemp, &tempRack, headnum2);
			//subtraction(slist *num1, slist *num2, slist **result)
			subtraction(tempRack,*headnum2, &resTemp);

			printf("tempRack after sub is:============\t");
			printt(tempRack);
			printf("headnum2 after sub:============\t");
			printt(*headnum2);
			printf("\n");
			
			printf("restemp is:============\t");
			printt(resTemp);
			printf("\n");

			tempRack = NULL;
			tempRack = resTemp;

			printf("tempRack is:============\t");
			printt(tempRack);
			resTemp = NULL;
			delete_list(&resTemp);
			count++;
			printf("count:-------- %lld \n",count );
		}
		else
		{
			return count;
			break;
		}
	}
	
}	