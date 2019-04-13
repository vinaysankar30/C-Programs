#include<stdio.h>
main()
{
	
	int A[5][5],B[5][5],C[10][10];
	int i,j,m,n,p,q,k;
	printf("enter the dimentions \n");
	scanf("%d%d%d%d",&m,&n,&p,&q);
	if (n!=p)
	{	printf("wrong dimentions");	}
	else
	{	printf("Enter the elements of two matrices \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}printf("Enter the elements of 2nd matrix \n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
	}
	for(i=0;i<p;i++)
	{ int sum=0;
		for(j=0;j<q;j++)
		{C[i][j]=0;
			for(k=0;k<n;k++)
			{
				sum+=A[i][k]*B[k][j];
			}C[i][j]=sum;
		}
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d\t",C[i][j]);
			} printf("\n");
		}
}

	








