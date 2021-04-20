#include<stdio.h>


int removedups(int arr[],int arrsize,int i)
{
	int j;
	if(i != arrsize-1)
	{
		if(i ==i+1)
		{
			j = i+1;
			if(j!= arrsize)
			{
				while(arr[j] != arrsize-1)
				{
					arr[j] = arr[j+1];
					j = j=1;
				}
			}
			else
			{
				arr[i] = arr[j];
			}
			arrsize = arrsize-1;

		}
		i =i+1;
		removedups(arr,arrsize,i);

	}
	
	
	 return arrsize;
}

void main()
{	int res,i=0;
	int arr[] = {10,10,20,20,30,30};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	res = removedups(arr,arrsize,i);
	printf("%d",res);
}