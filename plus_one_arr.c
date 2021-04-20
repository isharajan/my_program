#include<stdio.h>
int *plusone(int *arr,int arrsize)
{
	if(arrsize == 0)
	{
		arr[0] = arr[0]+1;
	}
	else
	{
		arr[arrsize-1] = arr[arrsize-1]+1;
	}
	return arr;
}

void print_array(int *arr,int arrsize)
{
	printf("[ ");
	for(int i=0;i<arrsize;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
}

void main()
{
	int arr[] = {2,3,4,5};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	printf("before -->");
	print_array(arr,arrsize);
	plusone(arr,arrsize);
	printf("after  -->");
	print_array(arr,arrsize);

	
}