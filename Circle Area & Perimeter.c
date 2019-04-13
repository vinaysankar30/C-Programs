//' Basic C program to find Area and Perimeter of Circle *//
#include<stdio.h>
#define PI 3.14
int main()
{
	float r,p;
	printf("enter the radius\n");
	scanf("%f",&r);
	float area=PI*r*r;
	printf("area is%f\n",area);
	p=2*PI*r;
	printf("the perimeter is%f\n",p); 
        return 0;
	
}

