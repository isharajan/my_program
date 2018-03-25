#include<stdio.h>
#include<conio.h>
void main()
{
char name[100];
int tam,eng,math,phy,che,bio,total,average;
printf("\nEnter the name\t");
scanf("%s",&name);
printf("\nEnter the marks(tam,eng,math,phy,che,bio) : ");
scanf("%d%d%d%d%d%d",&tam,&eng,&math,&phy,&che,&bio);
total=tam+eng+math+phy+che+bio;
average=(tam+eng+math+phy+che+bio)/6;
clrscr();
printf("\n----------------------");
printf("\nHi %s,\nThis is your mark and total",name);
printf("\nTamil\t= %3d\nEnglish\t= %3d\nMaths\t= %3d\nPhysics\t= %3d\nChemist\t= %3d\nbiology\t= %3d",tam,eng,math,phy,che,bio);
printf("\n-----\t-----");
printf("\ntotal\t= %d",total);
printf("\n-----\t-----");
printf("\naverage\t= %3d",average);
printf("\n========================");
//getch();

}
