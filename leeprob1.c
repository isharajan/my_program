//Input: array = [9, -2, -9, 11, 56, -12, -3]
//Output: [81, -2, 81, 11, 3136, -12, 9]
//Explanation: The numbers at even indexes (0, 2, 4, 6) have been squared, 
//whereas the numbers at odd indexes (1, 3, 5) have been left the same.

# include<stdio.h>
void main()
{
	int a[] = {2,20,4,40,6,60,8,80};
	int i,as;
	as = sizeof(a)/sizeof(a[0]);
	printf("original array \n");
	for(int i =0; i<as;i++)
    {
        //printf("a[%d] = %d\n",i,a[i]);
        printf("%d ",a[i]);
    }
    printf("\n");
    
	for(i =0; i<as; i++)
	{
		if(i%2 == 0)
		{
			a[i] = a[i] * a[i];
		}
	}

	printf("new array\n");
	for(int i =0; i<as;i++)
    {
        //printf("a[%d] = %d\n",i,a[i]);
        printf("%d ",a[i]);

    }
    printf("\n");
}