#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10],c[10];
	int len,n;
	printf("Enter the string\n");
	scanf("%s"&a);
	len=strlen(a);
	printf("The length of string is %d\n",len);
	printf("the string copied is %s\n",strcpy(b,a));
	printf("Enter string2");
	scanf("%s",c);
	if(n>0)
	{
		printf("%s is greater than %s\n",a,c);
	}
	else if(n>0)
	{printf(" %s is smaller than  %s\n",a,c);
	}
	else
	{
		printf("The strings are equal\n");
		printf("The concatinated string is %s\n",strcat(a,c));
	}
}
