#include<stdio.h>
int add(int *p,int *q)
{	int c;
	printf("%d\n",*p);
	printf("%d\n",*q);
	c = *p + *q;
	//return c;

}


void swap(int *x,int *y)
{
	int  temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("x =  %d ,y = %d\n",*x,*y);
}

void main()
{
	int a,b,ress;
	a= 20;
	b= 30;
	ress =add(&a,&b);
	printf("total =%d\n",ress);
	printf("before swap a = %d ,b = %d\n",a,b);
	swap(&a,&b);
	printf("after swap a = %d , b = %d\n",a,b);
	
}