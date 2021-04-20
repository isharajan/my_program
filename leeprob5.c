#include <stdio.h>
int no_of_digit(int n,int count)
{
	int rem;
	printf("n =================== %d\n",n);
	rem = n%10;
	count = count+1;
	n = n/10;
	
	if(n>0)
	{
		printf("count  = %d ",count);
		no_of_digit(n,count);

		
	}

	count = count +1;
	return count;
}

void main()
{
	int evencount =0,count =0;
	int i,as,res;
	clrscr();
	int nums[] = {12,10,34645,224466,77};
	as = sizeof(nums)/sizeof(nums[0]);

	evencount = no_of_digit(4,1);
	printf("even count = %d\n",evencount);
}