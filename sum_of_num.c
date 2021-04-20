#include<stdio.h>

int fun(int n,int res)
 {    
    
     int rem;
     if(n<9)
     {
         return res+n;
     }
     else
     {
         rem = n%10;
         n=n/10;
         res = res + rem;
         fun(n,res);
     }
 }
 

int main() {
    // Write C code here
    int n=10384;
    int res=0;
    printf("sum of %d = %d\n",n,fun(n,res));
    return 0;
}