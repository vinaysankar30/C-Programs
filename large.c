#include<stdio.h>
main()
{
	int num,l,i;
	int a[5];
	printf("Enter the numbers \n");
	scanf("%d",&num);
	l=a[0];
	for (i=0;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=num;i++)
	{
		if (a[i+1]>a[i])
		{ l=a[i+1]; }
	}
printf("the largest number is %d ",l);
}
