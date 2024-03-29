/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
main()
{
	float ci,p,r,t,a;
	printf("\n\n\tEnter Principle Value : ");
	scanf("%f",&p);
	printf("\n\n\tEnter Rate Value : ");
	scanf("%f",&r);
	printf("\n\n\tEnter Time Duration : ");
	scanf("%f",&t);
	a=p*(1+r/100)*t;
	printf("\n\n\tYour Amount : %.2f",a);
	ci=a-p;
	printf("\n\n\t Your Compound Interest Is : %.2f",ci);
}
