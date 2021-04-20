#include<stdio.h>
#include<string.h>


char reverse(char s[],int i,int strl)
{
	if(i == strl-1)
	{
		return s[i];
	}
	else
	{
		return strcat(s[i]+reverse(s,i+1,strl));
	}
}

void main()
{
	
	int i=0;
	char s[4] = "isha";
	int strl = strlen(s);
	printf("%d\n",strl);
	printf("%s",reverse(s,i,s[i]));
	//res = strcat(res,reverse(s,i,strl));
	//printf("%s\n",res);
}