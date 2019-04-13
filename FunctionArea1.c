/*C program to find the area of different shapes using functions(Rectangle,
Circle, Triangle, Cube). Use different category of functions for each shape such as
● Functions with no arguments and no return values
● Functions with no arguments and having return value
● Functions with arguments and no return value
● Functions with arguments and return value*/

// This program can be done in two methods this is the first type

#include<stdio.h>
float a,b;
void rectangle()
{
	printf("area=%f",a*b);
}
float circle()
{
	float area=(22/7)*a*a;
	return area;
}
void triangle(float a,float b)
{
	printf("area=%f",(1/2)*b*a);
}float cube(float a)
{
	return(6*a*a);
}
int  main()
{
	int ch;float result;
	printf("Enter your choice 1.rectangle\t2.circle\t3.triangle\t4.cube\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:scanf("%f%f",&a,&b);
		       rectangle();break;
		case 2:scanf("%f",&a);
	               result=circle();break;
			printf("%f",a);
		case 3:scanf("%f%f",&a,&b);
			triangle(a,b);break;
		case 4:scanf("%f",&a);
			result=cube(a);
			printf("%f",result);
	}return 0;
}
	
	
