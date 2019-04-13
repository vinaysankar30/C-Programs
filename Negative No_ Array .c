// Program to find number of negative numbers using Array

#include<stdio.h>
main()
{
int a[100],n,g,i,j,count=0;
{
printf("enter the number of number");
scanf("%d",&n);
{
for(i=0;i<n;i++)
{
printf("enter the numbers");
scanf("%d",&g);
a[i] = g;
}
{
for(j=0;j<n;j++)
{
if(a[j]<0)
	count++;
}
printf("number of -ve numbers is %d\n",count);
}
}
}
}



