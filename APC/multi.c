#include "common.h"

int mull(slist **headnum1, slist **headnum2, slist **headsum)
{
	if(*headnum2 == NULL || *headnum1 == NULL)
	{
		return FAILURE;
	}
	reverse(&(*headnum1));
	reverse(&(*headnum2));
	slist *temp, *temp1, *temp2, *racknum1 = NULL, *tempRack = NULL, *result = NULL, *result1 = NULL;
	temp1 = *headnum1;
	temp2 = *headnum2;
//slist *new = malloc(sizeof(slist));
	int carry_rack1 = 0;
	int rack1 = 0;
	int sum1 = 0;
	int i;
	int rackUP = 0;
	int mul;
	insert_at_first(&result,0);
	//insert_at_first(racknum2,0);
	//write a code here for no of node t1 t2 switch headnum1 headnum2
    while((temp2))// || temp2 ))
    {
    	for(i = 0;i < rackUP;i++)
	    {
	    	printf("adsd\n");
	    	insert_at_first(&racknum1,0);
	    }
	     printf("value rack%d\n",rackUP );
	    temp = racknum1;
	    while(temp)
	    {
	    	printf("ttt%d------->",temp->data);
	    	temp = temp->link;
	    }
	    printf("\n");
	    temp1 = *headnum1;
    	while(temp1)
    	{
    		mul = (temp2->data) * (temp1->data);
    		if(mul > 9999)
    		{	
	        	rack1 = (mul + carry_rack1) % 10000;
	        	carry_rack1 = (mul + carry_rack1) / 10000;
	        }
	        else
	        {
	        	rack1 = (mul + carry_rack1);
	        	carry_rack1 = 0;
	        }
	        //printf("carr %d\n", rack1);
	        //insert_at_first(racknum1,rack1);
	        insert_at_first(&racknum1,rack1);

	      
	        if(temp1->link == NULL)
	        {
	        	if(carry_rack1 != 0)
	        	{
	        		insert_at_first(&racknum1, carry_rack1);
	        	}
	        	//temp1 = *headnum1;//reset the 1st d=number pointer
	        	break;
	        	//if(temp2->link != NULL)
	        	//{
	        	//	rackUP
	        	//	temp2 = temp2->link;
	        	//}
	        }
	        else
	        {
	        	temp1 = temp1->link;
	        }
	        //keep appending zeroes as rack increses
	    }
	  
	    tempRack = racknum1;
	    temp = racknum1;
	    while(temp)
	    {
	    	printf("racknum data%d--->",temp->data);
	    	temp = temp->link;
	    }
	    printf("\n");
	    racknum1 = NULL;
	    rackUP++;
	   
	    //sum_nodes(&tempRack,headsum,headsum);
	     temp = result;
	    while(temp)
	    {
	    	printf("restt%d------->",temp->data);
	    	temp = temp->link;
	    }
	    sum_nodes(&tempRack,&result,&result1);
	    
	    temp = result1;
	    while(temp)
	    {
	    	printf("res1tt%d------->",temp->data);
	    	temp = temp->link;
	    }
	    result = result1;
	    result1 = NULL;
	    printf("\n");
	    //if(temp2->link != NULL)
	    {
	    	temp2 = temp2->link;
	    	carry_rack1 = 0;
	    }
	    //else
	    {
	    //	break;
	    }
	  //sum(tempRack,headsum,headsum);
	    
    }
    *headsum = result;
    return SUCCESS;
    printf("enddd\n");
}