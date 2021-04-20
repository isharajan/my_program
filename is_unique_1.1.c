
//implement an algorithm to determine if a string has all unique characters
#include<stdio.h>
void main()
{	int i,j;
	int flag =1;
	char str[] = "Helo";
	printf("string = %s\n",str);
	int strlen = sizeof(str);
	printf("strlen = %d",strlen);
	for(i=0; i<strlen; i++)
	{
		for(j=i+1; j<strlen; j++)
		{
			if(str[i] == str[j])
			{
				flag =0;
			}
		}
	}
	if(flag == 0)
	{
		printf("\nNot  Unique\n");
	}
	else
	{
		printf("\nYes.. it is Unique\n");
	}
}