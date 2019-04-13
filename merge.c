#include<stdio.h>
main()
{
	int j,i;
	int a[5],b[5],c[10];
	printf("array a \n");
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array b \n");
	for (j=0;j<=4;j++)
	{
		scanf("%d",&b[j]);
	}
	for (i=0;i<=4;i++)
	{
		c[i]=a[i];
		
	}
	printf("arraY C is \n");
	for (j=0;j<=4;i++,j++)
	{
		c[i]=b[j];
	}
	for (j=0;j<=9;j++);
	{ 
		printf("%d",c[j]);
	}
}
