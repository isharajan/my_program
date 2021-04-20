#include <stdio.h>
 void fun(int n1,int n2,int n3,int n)
 {
     if(n3<n)
     {  
         n1 = n2;
         n2 = n3;
         n3 = n1+n2;
         if(n3<n)
         {
         printf("%d\n",n3);
         }
         fun(n1,n2,n3,n);
         
     }
     
 }

int main()
{
    int n1,n2,n3,n;
    n1=0;
    n2=1;
    n3=n1+n2;
    n = 20;
    printf("Hello World\n");
    
    printf("%d\n",n1);
    printf("%d\n",n2);
    
    printf("%d\n",n3);
    fun(n1,n2,n3,n);
    return 0;
}
