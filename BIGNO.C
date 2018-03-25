#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\nenter the three values\n");
  scanf("\n%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  {
   printf("\n%d is big",a);
   getch();
  }
  else
  {
   if((b>c)&&(b>a))
    {
     printf("\n%d is big",b);
     getch();
    }
   else
   {
    printf("\n%d is big",c);
    getch();
   }
  }
}

