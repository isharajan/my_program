/***
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :


Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.

***/



#include <stdio.h>
#include<stdbool.h>

_Bool checkIfExist(int *a, int as)
{   int j,i,m,n,flag;
    _Bool x = true,y=false;

    for(i=0; i<as; i++)
    {
        m = a[i];
        n = m*2;
        //printf("%d %d\n",m,n);
        for(j=0; j<as; j++)
        {  
            if(a[j] == n)
            {
                flag =1;
                printf("m =%d * 2 \nn=%d\n",m,n);
                break;
            }
           
        }

    }
    if(flag == 1)
    {
        return x;
    }
    else
    {   
        printf("m =%d * 2 \nn=%d\n",m,n);
        return y;
    }
}


void main()
{
    int as,i;
    _Bool res;
    int a[] = {13,15,14,7};

    as = sizeof(a)/sizeof(a[0]);
    res =checkIfExist(a,as);

    printf("[");
    for(i=0;i<as;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]");

    printf("\nres = %d \n",res);
    printf("res = %s\n",res ? "true" : "false");    

}