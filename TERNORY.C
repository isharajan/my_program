#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,big;
  clrscr();
  printf("\nenter 3 values\n");
  scanf("\n%d%d%d",&a,&b,&c);
  big=(a>b)?(a>c?a:c):(b>c?b:c);
  printf("%d,is big");
  getch();

}