#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,u, strlen1;
	int space_count=0;
	int str2size;
	char substr[3] ="%20";
	char str2[100];
	int flag =0;
	char str1[100] = "mr john smith";
	strlen1 = strlen(str1);
	printf("===========\n");


	/*for(i=0; i<strlen1; i++)
	{
		if(str1[i] == ' ')
		{
			space_count = space_count=1;
		}
	}
	str2size = strlen1 + (space_count * 2);*/
	

	for(j=0; j<strlen1-1; j++)
	{
	

		/*if(str1[j] != ' ')
		{
			if(flag !=0)
			{
				k = j+ (flag *2);
			}
			else
			{
				k = j;
			}
			str2[k] = str1[j];
		}
		else
		{

			if(flag !=0)
			{
				k = j+ (flag *2);
			}
			else
			{
				k = j;
			}
			 u = 0;
			
			while( substr[u] != '\0')
			{
				str2[k] = substr[u];
				k = k + 1;
			}u++;

			if(flag == 0)
			{
				flag = 1;
			}
			else
			{
				flag = flag +1;
			}

		}
	}
	str2[j] ='\0';*/

	printf("original str : %s\n",str1);
	//printf("urlify str : %s\n",str2);

}
