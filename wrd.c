#include<stdio.h>
main()
{
	int n,digit,rev=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	do
	{
		digit=rev%10;
	
		switch(digit)
		{
			case 0:printf("zero ");
			break;
			case 1:printf("one ");
			break;
			case 2 :printf("two ");
			break;
			case 3:printf("three ");
			break;
			case 4 :printf("four ");
			break;
			case 5 :printf("five ");
			break;
			case 6 :printf("six ");
			break;
			case 7:printf("seven ");
			break;
			case 8 :printf("eight ");
			break;
			case 9 :printf("nine ");
			break;
			default :break;
		}
		rev=rev/10;
}while(rev>0);
	
}
