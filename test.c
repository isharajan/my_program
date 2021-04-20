// string builder
#include<stdio.h>
void main()
{
   char str[20];
   char nstr[] = "";
   int i=0;
   printf("enter the name : ");
   fgets(str,20,stdin);
   while(str[i] != '\0')
   {
      nstr[i] = str[i];
      i++;
   }
   nstr[i] = '\0';


   printf("new string = %s\n",nstr);


}