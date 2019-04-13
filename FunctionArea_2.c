/*Write a C program to find the area of different shapes using functions(Rectangle, Circle, Triangle, Cube). Use different category of functions for each shape such as
Functions with no arguments and no return values
Functions with no arguments and having return value
Functions with arguments and no return value
Functions with arguments and return value*/

// This program is done two ways :- 2nd Method

#include<stdio.h>
void rect()
{
int a,b,area;
printf("enter the values of length and breath\n");
scanf("%d%d",&a,&b);
area = a*b;
printf("area is %d\n",area);
}
float cir()
{
float r,area,pie= 3.14;
printf("enter radius\n");
scanf("%f",&r);
area = pie*r*r;
return area;
}
void tri(int l,int b,int h)
{
int area;
area = l*b*h;
printf("area is %d\n",area);
}
float cube(int a)
{
int area;
area = a*a*a ;
return area;
}
main()
{
float ca,cua;
rect();
ca = cir();
printf("circle are %f\n",ca);
tri(2,3,4);
cua = cube(5);
printf("cube are is %f\n",cua);
}



