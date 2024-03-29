//WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int year;
	printf("\n\n\tEnter Year : ");
	scanf("%d",&year);
	
	{
	if ((year%4==0 && year%100!=0)||(year%400==0) )
	printf("\n\n\t%d Is Your Leap Year",year);
	

	else
	printf("\n\n\t%d Is Not Leap Year",year);}
}
