#include<stdio.h>
main()
{
	int d1,d2,d3,i,j,k;
	printf("Enter the diamentions \n");
	scanf("%d%d%d",&d1,&d2,&d3);
	int A[10][10][10];
	for (i=0;i<d1;i++)
	{
		for (j=0;j<d2;j++)
		{
			for (k=0;k<d3;k++)
			{
				scanf("%d",&A[i][j][k]);
			}
		}
	}
	for (i=0;i<d1;i++)
	{
		for (j=0;j<d2;j++)
		{
			for (k=0;k<d3;k++)
			{
				printf(" %d\t",A[i][j][k]);	
			}
		}printf("\n");
	}
}
