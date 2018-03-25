#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
   int total;
   total=a+b;
   return total;
}
int sub(int a,int b)
{

   int res;
   res=a-b;
   return res;
}
int mul(int a,int b)
{
   int mult;
   mult=a*b;
   return mult;
}
int div(int a,int b)

{
  int divn;
  divn=a/b;
  return divn;
}
int exp(int a,int b)
{

  int n=0,temp=1;
  while(n<b)
  {
    temp*=a;
    n=n+1;
  }
  return temp;
}
int sqr(int a)
{
  int sqre;
  sqre=a*a;
  return sqre;
}
void main()
{
  int a,b,sum,subtract,multiply,divin,exponent,sqare;
  char *choice;
  clrscr();
  printf("\nenter two values\n");
  scanf("%d%d",&a,&b);
  printf("\nenter your choice");
  scanf("%s",choice);
  //printf(">>>>%c??%d|%d|",choice,*choice=='+',*choice=='-');
  switch(*choice)
  {
   case '+':
      printf("\naddition = %d",add(a,b));
      break;
   case '-':
      sub(a,b);
      printf("\nsubtraction = %d",subtract);
      break;
   case '*':
      mul(a,b);

      break;
   case '%':
      div(a,b);
      break;
   case '^':
      exp(a,b);
      break;
   case '2':
      sqr(a);
      break;
   default:
      printf("Invalid choice");
      break;
}
 /* sum=add(a,b);
  subtract=sub(a,b);
  multiply=mul(a,b);
  divin=div(a,b);
  exponent=exp(a,b);
  sqare=sqr(a);


  printf("\nsubtraction = %d",subtract);
  printf("\nsubtraction = %d",subtract);printf("\nsubtraction = %d",subtract);printf("\nsubtraction = %d",subtract);printf("\nmuitiply = %d",multiply);
  printf("\ndivition = %d",divin);
  printf("\nexponent = %d",exponent);
  printf("\nsqare = %d",sqare);
  */
  getch();

}