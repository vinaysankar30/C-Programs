#include<stdio.h>
main()
{
	int a,b,c,ans;
	printf("enter the numbers\n");
	scanf("%d%d\n",&a,&b);
	printf("enter the choices\n1.add\n2.Subtract\n3.multiply\n4.Divide");
	scanf("%d",&c);
	if (c==1)
	{ans=a+b;}
	else if(c==2)
	{ans=a-b;}
	else if(c==3)
	{ans=a*b;}
	else if(c==4)
	{ans=a/b;}
printf("the result is %d\n",ans);
}	
	
