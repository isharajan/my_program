#include<stdio.h>
#include<conio.h>

void myvoidfn(){
   printf("\nvoif_fn called return nothing");
}

void add(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("%d+%d=%d",a,b,c);
}

void main(){
   clrscr();
   myvoidfn();
   add();
   getch();
}

