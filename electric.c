#include<stdio.h>
main()
{
	float units;
	float total;
	printf("Enter the units \n");
	scanf("%f",&units);
	if (units<=50)
	{
		total=units*0.5;
	}
	else if(units<=150)
	{
		total=((units-50)*0.75)+50*0.5;
	}
	else if(units<=250)
	{
		total=((units-150)*1.20)+75+(50*0.5);
	}
	else if(units>250)
	{
		total=((50*0.5)+120+75)+(units-250)*1.5;
	}
total=total+(total*0.2);
printf("total is %f",total);
}

