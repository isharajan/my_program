#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\n enter two values");
  scanf("%d%d",&a,&b);
  if(a<b)
  {
   printf("%d is small",a);
   getch();
  }
  else
  {
   printf("%d is small",b);
   getch();
  }



}