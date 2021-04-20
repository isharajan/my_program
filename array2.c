#include <stdio.h>

void main()
{
  int a[] = {10,20,30,40,50,60};
  int pos = 1,data = 1000;
  int i,m,n;
  n = sizeof(a)/sizeof(a[0]);
  printf("original array \n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  n = n+1;
  
  //insert data at front of the array
  for(m=n; m>=pos; m--)
  {
    a[m] = a[m-1];
  }
  a[pos -1] = data;

  printf("after insert data\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
}