/* 1.4
Palindrome Permutation: Given a string,
write a function to check if it is a permutation of a palindrome.
A palindrome is a word or phrase that is the same forwards and backwards.
A permutation is a rearrangement of letters. 
The palindrome does not need to be limited to just dictionary words.

EXAMPLE
Input: Tact Coa
Output: True (permutations: "taco cat", "atco eta", etc.)
*/

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100] = "huhuhm";
	int i,j;
	int count=0;
	int dbl_char_count =0;
	int strlen1 = strlen(str1);
	for(i=0; i<strlen1-1; i++)
	{
		count =0;
		for(j=i; j<strlen1; j++)
		{
			//printf("%c === %c\n",str1[i],str1[j]);
			if(str1[i] == str1[j])
			{
				//printf("%c == j(%c)\n",str1[i],str1[j]);
				count = count +1;
				//printf("count = %d\n",count);
			}
			/*else
			{
				printf("*******\n");
			}*/
		}
		count = count%2;
		if(count == 0)
		{
			dbl_char_count = dbl_char_count + 2;
			//printf("dbl_char_count(%c) = %d\n",str1[i],dbl_char_count);
		}
	}


	printf("string = %s\n",str1 );
	printf("strlen = %d\n",strlen1 );
	printf("dbl_char_count = %d\n",dbl_char_count);



	if(dbl_char_count == strlen1 -1)
	{	
		
		printf("Yes ...it's palindrome permutation\n");
	}
	else if(dbl_char_count == strlen1)
	{
		
		printf("Yes ...it's palindrome permutation\n");
	}
	else
	{
		
		printf("No ...it's not palindrome permutation\n");
	}
}
