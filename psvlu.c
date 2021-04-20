#include <stdio.h>
int add(int a,int b)
{
	int c;
	c = a+b;
	return c;
}


int  swap(int p, int q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
	printf("after swap %d , %d \n",p,q);
	printf("p = %d, q = %d\n",p,q);
}

void main()
{	int a,b,res,swapres;
	a = 20;
	b = 30;
	res=add(a,b);
	printf("total = %d\n",res );

	printf("before swap %d , %d\n", a,b);
	swap(a,b);
	printf("a = %d,b =%d\n",a,b);

}