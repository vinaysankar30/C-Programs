#include<stdio.h>
main()
{
	int n,num,digit,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);num=n;
	while(n>0)
	{
		digit=n%10;
		sum=(sum*10)+digit;
		n=n/10;
	}
	if (sum==num)
	{
		printf("the given number is palindrome");
	}
	if (sum!=num)
	{
		printf("The given number is not a palindrome");
	}
}
