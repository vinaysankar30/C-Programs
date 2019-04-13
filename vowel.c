#include<stdio.h>
main()
{
	char c;
	printf("Enter a charecter \n");
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("The given charecter is a vowel \n");
	}
	else
	{
		printf("the given charecter is a consonent \n");
	}
}
