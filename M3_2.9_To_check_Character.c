//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main()
{
	char a;
	printf("\n\n\t Enter any Character : ");
	scanf("%c",&a);
	
	if(a>=65 && a<=90)
	{
		printf("\n\n\t %c is Uppercase",a);
	}
	else if (a>=97 && a<=122)
	{
		printf("\n\n\t %c is Lowercase",a);
	}
	
	else if(a>=0 && a<=9, a>=48 && a<=57)
	
		printf("\n\n\t %c is Digit",a);
	else 
		printf("\n\n\t %c is Special Character",a);
	
}
