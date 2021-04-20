#include <stdio.h>

int fun(int i,int arr[],int arrsize)
{
    if(i==arrsize-1)
    {
        return arr[i];
    }
    else
    {
        fun(i+1,arr,arrsize);
    }
}
 
int main() {
    // Write C code here
    int i=0;
    int arr[5] = {10,20,30,40,50};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    printf("%d",fun(i,arr,arrsize));
    return 0;
}