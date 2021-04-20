#include <stdio.h>
// fining maximum element in array
int main()
{   int i,max;
    printf("Hello World\n");
    int a[] = {3000,17,5,4,6,2000,1,100,1000};
    int as = sizeof(a)/sizeof(a[0]);
    
    max = a[0];
    for (i=0; i<as; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
       
    }
     
    printf("max is =  %d\n" ,max);
    
    return 0;
}