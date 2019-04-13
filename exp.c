#include<stdio.h>
main()
{
	float a,b,c,d,e,f,g,result;
	printf("Enter the  numbers");
	scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
	result=((a+b)/c*d-e)*(f-g);
	printf("the answer is %f",result);
}
