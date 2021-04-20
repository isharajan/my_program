#include<stdio.h>
void main()
{
	int i,j;

	//print array element
	int r1,c1;

	//ploting
	int i1,j1;
	int i2,j2;

	
	// print matrix m*n
	printf("enter row    : ");
	scanf("%d",&r1);
	printf("enter column : ");
	scanf("%d", &c1);

	for (i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			printf("(%d,%d)\t ",i,j);
		}
		printf("\n");
	}

	printf("==============================================\n");

	

	//print whole path upto given position in matrix
	printf("Path From\n");
	printf("enter i1  , j1 : \n");
	scanf("%d %d",&i1,&j1);
	printf("*************************\n");

	printf("Path Upto:\n");
	printf("enter i2  , j2 : \n");
	scanf("%d %d",&i2,&j2);
	printf("**************************\n");

	for(i=i1; i<=i2; i++)
	{
		for(j=j1; j<=j2; j++)
		{
			printf("(%d,%d)\t",i,j);
		}
		printf("\n");
	}
	
	printf("===============================================\n");
	if(j1>j2)
	{
		for(j=j1; j>j2; j--)
		{
			i =i1;
			printf("go left\n");
		}
		j =j2;

		for(i=i1; i<i2; i++)
		{
			j=j2;
			printf("go down\n");
		}
	}
	else
	{
		for(j=j1; j<j2; j++)
		{
			i = i1;
			
			//printf("(%d,%d)",i,j);
			printf("go right\n");	
		}
		i1 = i1+1;

		for(i=i1; i<=i2; i++)
		{
			j=j2;
			//printf("(%d,%d)",i,j);
			printf("go down\n");	
		}
	}

	
}