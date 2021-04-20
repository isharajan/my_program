#include<stdio.h>
void main()
{
	int arr[] = {1,1,2,2,3,3,4,4,4,5,6,6,6,6,8,8,8,8,8};
	int i,res,count=1;
	int arrsize = sizeof(arr)/sizeof(arr[0]);

	for (i=0; i<arrsize; i++)
	{
		if(arr[i] == arr[i+1])
		{
			count = count +1;
		}
		else
		{
			
			res = count%2;
			
			if(res!= 0)
			{
				
				printf("%d\n",arr[i]);
				
			}
			count = 1;
		}

	}
}