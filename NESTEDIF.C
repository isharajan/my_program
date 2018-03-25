#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter the three values");
    scanf("\n%d%d%d",&a,&b,&c);
    if(a>b)
    {
      if(a>c)
      {
       printf("%d is big",a
       );
       getch();
      }
      else
      {
       printf("%d is big",c);
       getch();
      }
    }
    else
    {
     if(b>c)
       {
	printf("%d is big",b);
	getch();
       }
       else
       {
	printf("%d is big",c);
	getch();

       }
    }
  }




