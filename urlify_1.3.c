/**
 * 
 * Problem:
 
 	Write a method to replace all spaces in a string with '%20 You may
 * 	assume that the string has sufficient space at the end to hold the additional
 * 	characters, and that you are given the "true" length of the string. (Note: if
 * 	implementing in Java, please use a character array so that you can perform
 * 	this operation in place.)

 	 EXAMPLE 
 	 Input: "Mr John Smith     ", 13
 	 Output:  "Mr%20John%20Smith"
 * 
 * Solution: Start from the end and work backwards
 *
 */


#include<stdio.h>
#include<string.h>
void main()
{
	int i,j, strlen1;
	
	char str1[100] = "mr john";
	strlen1 = strlen(str1);
	printf("==========");
	printf("strlen1 = %d",strlen1);


	for(i=strlen1; i >=0; i--)
	{
		if(str1[i] == ' ')
		{
			j = strlen1 -1;
			while(str1[j] != ' ')
			{
				str1[j+2] = str1[j];
			}j--;

			str1[j] = '%';
			str1[j+1] = '2';
			str1[j+2] = '0';

			printf("%s\n",str1);
			strlen1 = strlen(str1);
		}
	}

	printf("original str : %s\n",str1);
	printf("urlify str : %s\n",str1);

}
