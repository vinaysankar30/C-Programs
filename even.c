#include<stdio.h>
main()
{
	
	int n,i=1;int sum=0;
	printf("enter a number\n");
	scanf("%d",&n); 
		
	while (i<=n)
	{
		if(i%2==0)
		{sum+=i;}
		i++;
	}
	printf("sum=%d",sum);
} 
