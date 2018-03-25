#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a[10],i,sum=0;
  clrscr();
  printf("enter no of values n\t");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("\nsum of nos %d",sum);
  getch();
}
