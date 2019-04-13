#include <stdio.h>
#include <stdlib.h>
main()
{
int pin,usrpn=1212,ch,amt;
float bal=10,depo;
printf("Enter PIN:\t");
scanf("%d",&pin);
if (pin==usrpn)
{
printf("1)Balance Checking\n2)Cash Withdrawal\n3)Cash deposit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Balance :%f\n",bal);
break;
case 2:
printf("Enter the amount in multiples of 100,500,2000\n");
scanf("%d",&amt);
if (bal<100){
printf("Insufficient balance\n");}
else
{
if ((amt%100==0) || (amt%500==0) || (amt%2000==0)){
bal=bal-amt;
printf("Balance:%f\n",bal);}
else{
exit(0);}
}
break;
case 3:printf("Enter the amount to be deposited:\t");
scanf("%f",&depo);
bal=bal+depo;
printf("Balance:%f\n",bal);
break;
default:printf("Invalid Entry\n");
exit(0);
}
}
else{
printf("Invalid PIN :(\n");
exit(0);}
}

