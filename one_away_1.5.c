/**
 * Problem:
 *   There are three types of edits that can performed on strings:
 *   insert a character, remove a charachter, or replace a character.
 *   Given two strings, write a function to check if they are one edit (or zero edits) away.
 *
 * Example:
 *   pale, ple   -> true
 *   pales, pale -> true
 *   pale, bale  -> true
 *   pale, bake  -> false
 *
 * Solution:
 *
 */



#include<stdio.h>
#include<string.h>


char is_duplicate(char *str)

{
	int i,j,k;
	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	return *str;
}

void main()
{
	int i,j,match_count=0;
	int strlen1,strlen2,diff;
	int not_replace_char;
	char str1[100];
	char str2[200];



	printf("enter str1 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("enter str2 : ");
	fgets(str2, sizeof(str2), stdin);

	is_duplicate(str1);
	is_duplicate(str2);

	strlen1 = strlen(str1)-1;
	strlen2 = strlen(str2)-1;
	//printf("strlen1 = %d\n",strlen1);
	//printf("strlen2 = %d\n",strlen2);
	printf("newstr1 = %s",str1);
	printf("newstr2 = %s",str2);


	if(strlen1 > strlen2)
	{
		diff = strlen1 - strlen2;
		not_replace_char = strlen2;
	}
	else if (strlen1 < strlen2)
	{
		diff = strlen2 - strlen1;
		not_replace_char = strlen1;
	}
	else
	{
		diff = strlen1 - strlen2;
		not_replace_char = strlen1 -1;	
	}

	//printf("difference = %d\n", diff);
	if(diff <=1)
	{
		for(i=0; i<strlen1; i++)
		{
			for(j=0; j<strlen2; j++)
			{
				if(str1[i] == str2[j])
				{
					match_count = match_count +1;
					//printf("match_count = %d\n",match_count);
				}
			}
		}

	}

	printf("no.of. same char = %d\n",match_count);
	//printf("not replace char = %d\n", not_replace_char);
	if(match_count == not_replace_char)
	{
		printf("match_count = %d\n", match_count);
		printf("YES...one edit exist....TRUE\n");
	}
	/*else if(match_count == not_replace_char +1)
	{
		printf("0 edits occurs/ Rearragment of word\n");
	}*/
	else
	{
		printf("Edits >1 occurs....FALSE\n");
	}



}