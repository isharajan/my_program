/***
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example 1:

Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.

It doesn't matter what you leave beyond the returned length.

***/



#include <stdio.h>

int main()
    {

    int as,pos,i,j,k,key,flag;
    int a[]= {0,1,2,2,3,0,4,2};
    as = sizeof(a)/sizeof(a[0]);
    printf("size of original array = %d\n",as);
    for(int i =0; i<as;i++)
    {
        printf("%d ",a[i]);
    }
    
    key = 2;
    // remove purticular key elements  from array
    k =0;
    while(k <as)
    {
        for(i=0; i<as; i++)
        {
            if(a[i] == key)
            {
                for(pos = i; pos<as; pos++)
                {
                    a[pos] = a[pos+1];
                }
                as = as -1;
            }

        }
        k++;
    }
     

    printf("\nafter delete %d , array size = %d\n",key,as);
    for(int i =0; i<as;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
