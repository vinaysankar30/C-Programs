#include<stdio.h>
main()
{
	float HRA,BP,DA,PF,GROSS;
	int empno;
	printf("enter the empoloyee number\n");
	scanf("%d",&empno);
	scanf("%f",&BP);
	HRA=BP*0.2;
	DA=BP*0.8;
	PF=BP*0.12;
	GROSS=BP+HRA+DA-PF;
	printf("gross salary is %f\n",GROSS);
}
	
