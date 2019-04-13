//Write a C program to check whether the given character is vowel or consonant

#include <stdio.h>
main()
{
char ch;
printf("enter the char");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("its a vowel\n");
break;
default:
	printf("its constant\n");
}
}



