//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	a=40;
	b=20;
	printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	c=a+b;
	printf("\n\n\t C = A + B ");
	printf("\n\n\t %d = %d + %d",c,a,b);
	c=a-b;
	printf("\n\n\t C = A - B ");
	printf("\n\n\t %d = %d - %d",c,a,b);
	c=a*b;
	printf("\n\n\t C = A * B ");
	printf("\n\n\t %d = %d * %d",c,a,b);
	c=a/b;
	printf("\n\n\t C = A / B ");
	printf("\n\n\t %d = %d / %d",c,a,b);
	printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
}
