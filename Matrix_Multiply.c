//  C program to multiply two matrices


#include<stdio.h>
main()
{
int m1[10][10],m2[10][10],m,n,p,q,m3[10][10],i,j,k;
printf("Enter the size of the first array:\t");
	scanf("%d%d",&m,&n);
printf("Enter the size of the second array:\t");
	scanf("%d%d",&p,&q);
if(n==p)
{
	printf("Enter the first array elements:");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		scanf("%d",&m1[i][j]);
	}
	printf("Enter the second  array elements:");
	for(i=0;i<p;i++)
	{for(j=0;j<q;j++)
{
		scanf("%d",&m2[i][j]);
}
	}
 for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		for(k=0;k<n;k++)
		{
			m3[i][j]=m1[i][k]*m2[k][j];
		}
	}
}
printf("The new matrix is:\n");
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%d\t",m3[i][j]);
}printf("\n");
}}
else
printf("The given matrices cannot be multiplyed.\n");
}
