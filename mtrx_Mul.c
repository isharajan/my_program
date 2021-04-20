#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int arows,acols,brows,bcols,crows,ccols;
	int i,j,k;
	arows = 2;
	acols =2;
	brows = 2;
	bcols = 2;
	crows = arows;
	ccols = bcols;
	for(i = 0;i<arows;i++)
	{
		for (j =0;j<acols;j++)
		{	
			printf("enter no a: ");
			scanf("%d",&a[i][j]);

		}
	}

	for(i = 0;i<brows;i++)
	{
		for (j =0;j<bcols;j++)
		{
			printf("enter no b:");
			scanf("%d",&b[i][j]);

		}
	}


	for(i=0;i<crows;i++)
	{
		for(j=0;j<ccols;j++)
		{	c[i][j] = 0;
			for(k=0;k<acols;k++)
			{
				c[i][j] =c[i][j]+ a[i][k] * b[k][j];
			}
		}
 	}

	
	for(i = 0;i<crows;i++)
	{
		for (j =0;j<ccols;j++)
		{
			printf("%d",c[i][j]);

		}
		printf("\n");
	}

}

