
//Array Rotation....

#include<stdio.h>

 int print_arr(int arr[],int arrsize)
 {
 		for(int i=0; i<arrsize; i++)
 		{
 			printf("%d ",arr[i]);
 		}

 		printf("\n");
 }
void main()
{
	int k,n,i,j,temp;
	int arr[] = {10,20,30,40,50};
	int arrsize = sizeof(arr)/sizeof(arr[0]);
	//printf("arrsize = %d\n\n" ,arrsize);
	n=3;
	
	printf("array\n");
	print_arr(arr,arrsize);
	printf("\n");

	for(k=0; k<n; k++)
	{
		i = arrsize-1;
		j = i-1;
		temp = arr[i];

		while(j>=0)
		{
			arr[i] = arr[j];
			i = i-1;
			j = j-1;
		}
		arr[i] = arr[j];
		arr[j] = temp;

		//print_arr(arr,arrsize);
		//printf("\n");
	}
	printf("no.of.rotation = %d\n",n);
	printf("rotated array\n");
	print_arr(arr,arrsize);

}