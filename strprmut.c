#include <stdio.h>
#include <string.h>

int main () {
   char string1[] = "ashi";
   char string2[] = "isha";
   char temp;
   char temp1;

   int i, j;
   printf("string1 %s\n",string1);
   printf("string2 %s\n",string2 );
   int n1 = strlen(string1);
   int n2 = strlen(string2);

   if(n1 == n2)
   {
     // printf("String1 before sorting - %s \n", string1);

      for (i = 0; i < n1-1; i++) {
         for (j = i+1; j < n1; j++) {
            if (string1[i] > string1[j]) {
               temp = string1[i];
               string1[i] = string1[j];
               string1[j] = temp;
            }
         }
      }
      
      printf("String1 after sorting  - %s \n", string1);

      //printf("String2 before sorting - %s \n", string2);

      for (i = 0; i < n2-1; i++) {
         for (j = i+1; j < n2; j++) {
            if (string2[i] > string2[j]) {
               temp1 = string2[i];
               string2[i] = string2[j];
               string2[j] = temp1;
            }
         }
      }
   
      printf("String2 after sorting  - %s \n", string2);

      while(string1[i] !='\0')
      {
         if(string1[i] == string2[i])
         {
            i++;
         }
         else
         {
            break;
         }
      }

      

   }
   if(string1[i] == '\0')
      {
         printf("yes ... Permutation\n");

      }
      else
      {
         printf("not Permutation\n");
      }
   return 0;
}