#include <stdio.h>

int fibo(int n1,int n2, int N)
{
    int n3;
    n3 = n1+n2;
    
    if(n3 > N)
    {
        return n3;
    }
    else
    {
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
        return fibo(n1,n2,N);
        
    }
}

int main()
{
    int n1,n2,N;
    n1 = 0;
    n2 = 1;
    N = 20;
    printf("Hello World\n");
    printf("%d %d ",n1,n2);
    fibo(n1,n2,N);

    return 0;
}