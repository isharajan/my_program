#include <stdio.h>

int main()
    {

    int as,pos,i,j,k,key,flag;
    int a[]= {10,20,30,40,50,60,70,80};
    as = sizeof(a)/sizeof(a[0]);
    printf("size of original array = %d\n",as);
    for(int i =0; i<as;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    
    key =60;
    // delete purticular data in array
    for(j=0; j<as; j++)
    {
        if(a[j] == key)
        {
            flag = 1;
            break;
        }
    }
    pos = j;
    if(flag == 1)
    {   
        printf("\n key = %d\n\n", key);
        for(k = pos; k<as; k++)
        {
            a[k] = a[k+1];
        }
        as = as-1;
    
    }
    else
    {   printf("\n key = %d\n", key);
        printf(" key is not found in array ....!\n");
    }
    
    printf("after delete %d  array size = %d\n",key,as);
    for(int i =0; i<as;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    return 0;
}
