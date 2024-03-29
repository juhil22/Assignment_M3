//Calculate compound interest
#include<stdio.h>
main()
{
	float principle,amount,rate,time,ci;//compound interest (ci)
	printf("\n\n\t Enter Principle Value : ");
	scanf("%f",&principle);
	printf(" \n\n\t Enter Rate : ");
	scanf("%f",&rate);
	printf("\n\n\t Enter Time Duration (in year) : ");
	scanf("%f",&time);
	amount=principle*(1+rate/100)*time;
	printf("\n\n\t Your Amount : %.2f",amount);
	ci=amount-principle;
	printf("\n\n\t Your Compound Interest Is : %.2f",ci);
}
