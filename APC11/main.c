#include "common.h"
int flagg;
int main()
{
	//declare the vars
	slist *headnum1 = NULL;
	slist *headnum2 = NULL;
	slist *headsum = NULL;
	data_t data, n_data;

	int opt, status, num, n, i, j;
	char s1[255] = {'\0'}, s2[255] = {'\0'};
	int num1[255] = {'\0'}, num2[255] = {'\0'}, sum[] = {'\0'};
	
	//enter the array
	printf("Enter the 1st number\n");
	scanf("%s",s1);
	
	for (i = 0; s1[i] != '\0'; i++)
    {
        num1[i] = s1[i] - '0';
    }

	getchar();
	
	printf("Enter the 2nd number\n");
	scanf("%s",s2);

    for (j = 0; s2[j] != '\0'; j++)
    {
        num2[j] = s2[j] - '0';
    }
    
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    printf("1:%d 2: %d \n", length1, length2 );
    /*i = 0;
    while(num1[i])
    {
    	i++;
    	length1++;
    }
    j = 0;
    while(num2[j])
    {
    	j++;
    	length2++;
    }*/
    //print numbers
    printf("NUM1: \n");
    //for (i = 0; i < length1; i++)
    i = 0;
    while(num1[i])
    {
    	printf("%d",num1[i]);
    	i++;
    }
    printf("\n");
    printf("num2: \n");
  	j = 0;
    while(num2[j])
    {
    	printf("%d",num2[j]);
    	j++;
    }
	//run an infinite while loop
	while(1)
	{
		//slist *headnum1 = NULL;
		//slist *headnum2 = NULL;
		//print the user options
		printf("\n1.Sum\n2.subtract\n3.make_group\n4.Product\n7.print\n8.Exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			//insert the elements in a sorted order
			case 1:
			{
				sum_nodes(&headnum1,&headnum2,&headsum);
				break;
			}
			//insert the elements at the start of the list
			case 2:
			{
				//prompt + read user
				flagg = subtract_nodes(&headnum1, &headnum2, &headsum);
				break;
			}
			case 3:
			{
				printf("NUM1: \n");
			    //for (i = 0; i < length1; i++)
			    i = 0;
			    while(num1[i])
			    {
			    	printf("%d",num1[i]);
			    	i++;
			    }
			    printf("\n");
			    
				
				//prompt + read user
				make_group(&headnum1,num1,length1);
				printf("num2: \n");
			  	j = 0;
			    while(num2[j])
			    {
			    	printf("%d",num2[j]);
			    	j++;
			    }
				//printf("\n");
				getchar();
				make_group(&headnum2,num2,length2);
				break;
			}
			//case 4:
			{

			}
			//print the elements
			case 7:
			{
				printf("num1: \n");
				print_slist(headnum1);
				printf("\n");
				printf("num2: \n");
				print_slist(headnum2);
				printf("\n");
				printf("sum: \n");
				if(flagg == FLAG)
				{
					printf("-");
				}
				print_slist(headsum);
				break;
			}
			//exit
			case 8:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("Enter the correct option\n");
			}
		}
	}
}
