#include<stdio.h>
main()
{
	int num,sum=0,i;
	int a[5];
	printf("Enter the numbers \n");
	scanf("%d",&num);
	for (i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=5;i++)
	{
		sum+=a[i];	
		
	}
printf("the sum is %d ",sum);
}
