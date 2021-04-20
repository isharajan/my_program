#include <stdio.h>

 int fun(int count,int n)
 {
     if(n<9)
     {
         return count +1;
     }
     else
     {
         n = n/10;
         count = count+1;
         fun(count,n);
     }
 }
int main() {
    // Write C code here
    int n=485;
    int count =0;
    printf("%d",fun(count,n));
    return 0;
}