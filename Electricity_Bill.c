/* Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>
main()
{
int a;
float sum,total;
printf("enter the unit consumed");
scanf("%d",&a);
{
if(a<50)
{
	sum = a*.50;
	total = sum + (.20*sum);
	printf("total amount to be paid is %f\n",total);
}
else if(a>50&&a<=100)
{
	sum = a*.75;
	total = sum + (.20*sum);
	printf("total amount to be paid is %f\n",total);
}
else if(a>100&&a<=200)
{
	sum = a*1.20;
	total = sum + (.20*sum);
	printf("total amount to be paid is %f\n",total);
}
else if(a>200)
{
	sum = a*.50;
	total = sum + (.20*sum);
	printf("total amount to be paid is %f\n",total);
}
}
}
