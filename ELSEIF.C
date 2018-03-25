#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("\nenter tthe value of a");
   scanf("%d",&a);
   if(a>=80)
    {
     printf("\na grade");
    }
   else if(a>=60)
     {
     printf("\nb grade");
     }
   else if(a>=40)
     {
      printf("\nc grade");
     }
   else if(a<40)
     {
      printf("\nfail");
     }
    getch();


}