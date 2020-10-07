#include<stdio.h>
main()
{
int a[10],n,j,i,t;
printf("Enter the element in element");
scanf("%d",&n);
printf("Enter the array in element");
for(i=0;i<n;i++)
{
  scanf("%d"&a[i]);
}
  for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
   {
      if(a[j]>d[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
   }
}
  printf("The sorted array is given\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
