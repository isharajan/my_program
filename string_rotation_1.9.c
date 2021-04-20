/*string rotation:
 assume you have a method isSubstring which checks if one word is a substring of another. 
 Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring.
 (e.g., "waterbottle" is a rotation of "erbottlewat")

 solution:
 */
#include <stdio.h>
#include <string.h>
int main()
{
    
    char str1[50] = "waterbottle";
    char rotstr[50] = "erbottlewat";
    char str2[100];
    char str3[100];
    int strlen3;

    printf("str1          :  %s\n",str1);
    printf("is rotate str :  %s\n",rotstr);

    strcat(str1,str1);
    strcpy(str2,str1);
    str2[100] = str1[100];
    int strlen2 = strlen(str2);
   // printf("str1 : %s",str1);
    //printf("strlenth = %d\n",strlen2);
    //printf("Concatenated String: %s\n", str1);
   	//printf("new str2 :%s\n",str2);

   	int j =0;
   	for(int i=0;i<strlen2; i++)
   	{	
   		//printf("%c == %c\n",str2[i],rotstr[j]);
   		if(str2[i] == rotstr[j])
   		{
   			str3[j] = str2[i];

   			//printf("string 3 = %s\n",str3);
   			j = j+1;
   		}
   	}
   	str3[j] = '\0';


   	//printf("str3 : %s\n",str3 );
	strlen3 = strlen(str3);



   	if(strlen3 == strlen2/2)
   	{
   		printf("\nyes ..it is string rotation\n");

   	}
   	else
   	{
   		printf("\nit is not string rotation\n");
   	}
    return 0;
}

