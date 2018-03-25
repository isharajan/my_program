#include<stdio.h>
#include<conio.h>
void add(){
	int a,b,c;
	printf("\nenter the two values:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d+%d=%d",a,b,c);
}

void sub(){
	int x,y,z;
	printf("\nenter the two values:");
	scanf("%d%d",&x,&y);
	z=x-y;
	printf("%d-%d=%d",x,y,z);
}

void mul(){
	int l,m,n;
	printf("\nenter the two values:");
	scanf("%d%d",&l,&m);
	n=l*m;
	printf("%d*%d=%d",l,m,n);
}

void div(){
	int p,q,r;
	printf("\nenter the two values:");
	scanf("%d%d",&p,&q);
	r=p/q;
	printf("%d/%d=%d",p,q,r);
}
void main()
{
  add();
  sub();
  mul();
  div();
  getch();
}



