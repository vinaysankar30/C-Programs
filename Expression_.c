// C program to evaluate the arithmetic expression ((a+b/c*d-e)*(f-g)).


#include<stdio.h>
main()
{
float a,b,c,d,e,f,g,result;
printf("enter numbers,a,b,c,d,e,f,g");
scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
result = ((a+b/c*d-e)*(f-g));
printf("sum = %f\n",result);
}

