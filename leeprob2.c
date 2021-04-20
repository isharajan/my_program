/***Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.

Do the above modifications to the input array in place, do not return anything from your function.

 

Example 1:

Input: [1,0,2,3,0,4,5,0]
Output: null
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Example 2:

Input: [1,2,3]
Output: null
Explanation: After calling your function, the input array is modified to: [1,2,3] ***/


#include<stdio.h>
void main()
{
	int a[] = {1,0,2,3,0,4,5,0};
	int i,k,as;
	as = sizeof(a)/sizeof(a[0]);
	printf("original arary\n");
	for(i=0; i<as; i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0; i<as; i++)
	{	k = as;
		if(a[i] == 0)
		{
			i = i+1;
			while(i != k)
			{
				a[k] = a[k-1];
				k--;
			}
			a[i] = 0;
		}
	}

	printf("\nnew altered array\n");
	for(i=0; i<as; i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");
}