// Online C compiler to run C program online
#include <stdio.h>

int fun(int i,int arr[],int arrsize)
{
    if(i!=arrsize)
    {
        printf("%d ",arr[i]);
        fun(i+1,arr,arrsize);
    }
    return;
}
int main() {
    // Write C code here
    int i=0;
    int arr[6] = {10,20,30,40,50,60};
    int arrsize = sizeof(arr)/sizeof(arr[0]); 
    printf("Hello world\n");
    fun(i,arr,arrsize);
    return 0;
}