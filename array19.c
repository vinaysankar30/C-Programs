#include<stdio.h>
#include<string.h>
main()
{
	char temp[20];
	char names[10][20];
	int i,j,n;
	printf("Enter the number of strings \n");scanf("%d",&n);
	printf("enter %d strings",n);
	for (i=0;i<n;i++) 
	{
		for (j=0;j<2;j++)
		{	gets("%c",names[i][j]);}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if (strcmp(names[i],names[j])>0)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	printf("The sorted names are :\t");
	for(j=0;j<n;j++)
	{	printf("%s",names[j]);
	}

}
		
