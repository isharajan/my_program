#include <stdio.h>

int main()
    {
    printf("Hello World");
    int as,pos;
    int a[]= {10,20,30,40,50};
    as = sizeof(a)/sizeof(a[0]);
    printf("size of original array = %d\n",as);
    for(int i =0; i<as;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    
    //delete data front of the array
    for(pos=0; pos<as; pos++)
    {
        a[pos] = a[pos+1];
    }
    //delete last data in array
    as = as-1;
    
    printf("after delete first data array size = %d\n",as);
    for(int i =0; i<as;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    return 0;
}
