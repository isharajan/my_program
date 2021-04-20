#include<stdio.h>
#include<string.h>
void main()
{	
	char s1[10] = "aa";
	char s2[10] = "bb";
	int i =0,j=0;
	while(s1[i]!='\0')
	{
		i = i+1;
	}
	s1[i] = s2[j];
	while(s2[j] != '\0')
	{
		i = i+1;
		j = j+1;
		s1[i] = s2[j];
	}
	s1[i] = '\0';
	printf("%s\n",s1);
}