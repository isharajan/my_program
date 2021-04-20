#include<stdio.h>
int is_there_target(int target,int a[],int n, int avg_tot)
{
	
	printf("target = %d\n",target);

	if(target > avg_tot)
	{	
	    int ptr1 = n-1;
	    int iter = ptr1;
	    
	    for(int i =iter; i>=0; i--)
	    {
	        if(i!= 0)
    	    {
    	        int sum = a[ptr1] + a[i-1];
    	        if(sum == target)
    	        {
    	            return 1;
    	        }
	        }
	        else
	        {
	            int sum = a[ptr1] + a[i];
    	        if(sum == target)
    	        {
    	            return 1;
    	        }
	        }
	
	    }
	    return 0;
	}
	
	
	
	//if(target < avg_tot)
	else
	{
	    int ptr1 = a[0];
	    int iter = ptr1;
	    
	    for(int i =iter; i<n; i++)
	    {       
	            if(i != n-1)
	            {
	                int sum = a[ptr1] + a[i+1];
        	        if(sum == target)
        	        {
        	            return 1;
    	            }   
	            }
	            
    	        
    	        else
	            {
	                int sum = a[ptr1] + a[i];
	                if(sum == target)
        	        {
        	            return 1;
        	        }
	                
	            }
	       
	    }
	    
	    return 0;
	}
}

void main()
{
	int a[] = {1,2,3,4,5,10,20,30,40,50};
	int n = sizeof(a)/sizeof(a[0]);
	//printf("n = %d\n",n);

	int avg_tot = a[0] + a[n-1];
	//printf("avg_tot = %d\n",avg_tot);

	int target = 100;


	for(int i =0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");


	int res = is_there_target(target,a,n,avg_tot);
	if(res==1)
	{
		printf("TRUE\n");	
	}
	else
	{
		printf("FALSE\n");
	}
}