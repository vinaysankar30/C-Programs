#include<stdio.h>
main()
{
	int num;
	start:
	printf("enter the number \n");
	scanf("%d",&num);
	if (num<0)
	{
	goto start;
	}
	else
	{ printf("%d \n",num); }
	
	
	
}
	
