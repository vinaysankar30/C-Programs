#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter three sides \n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if ((s1+s2)>s3)
	{
		if((s2+s3)>s1)
		{
			if((s3+s1)>s2)
			{
				printf("valid");
				return 0;
			}
			
		}
	}

	
	printf("invalid");
	return 0;	
}
