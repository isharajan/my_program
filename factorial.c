#include <stdio.h>

int fun(n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return fun(n-1)*n;
    }
}
int main() {
    // Write C code here
    int n =3;

    printf("%d! is =%d",n,fun(n));
    return 0;
}