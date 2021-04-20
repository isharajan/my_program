/**
 * 1.5
 * Implement a method to perform basic string compression using the counts
 * of repeated characters. For example, the string aabcccccaaa would become
 * a2b1c5a3. If the "compressed" string would not become smaller than the
 * original string, your method should return the original string.
 */
#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,count;
	char str1[100] = "aaabbbbccddeeee";
	int strlen1 = strlen(str1);
	char str2[100];
	count =1;
	

	j =0;
	str2[j] = str1[i];
	j = j+1;
	for(i=0; i<strlen1; i++)
	{
		
		if(str1[i] == str1[i+1])
		{
			count = count +1;
		}
		else
		{
			str2[j] = count +'0';
			j = j+1;
			str2[j] = str1[i+1];
			j= j+1;
			count =1;
		}

	}


	//printf("original string = %s\n",str1);
	//printf("compressed string = %s\n",str2 );

	int strlen2  = strlen(str2);
	//printf("original strlen = %d\n",strlen1);
	//printf("compressed strlen = %d\n",strlen2);

	if(strlen2 < strlen1)
	{
		printf("compressed string = %s\n",str2 );
	}
	else
	{
		printf("original string = %s\n",str1);	
	}


}



