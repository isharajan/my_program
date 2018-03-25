#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
 int f;
 f=a+b;
 return f;


}

int sqre(int a)
{
 int e;
 e=a*a;
 return e;
}

void main()
{
  int a,b,c,d;
  clrscr();
  printf("enter two nums\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  d = add(a,b);
  d= sqre(a);
  printf("\ntotal is %d d=%d",c,d);
  //add();
  getch();
}