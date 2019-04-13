// Basic Program to print no of Negative numbers

#include<stdio.h>
main()
{
	int a[20];
	int count=0,i;
	printf("Enter the numbers \n");
	for (i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]<0)
		{
			count+=1;

		}
	}
printf("The number of negative numbers is  %d \t",count);
}
		
	
