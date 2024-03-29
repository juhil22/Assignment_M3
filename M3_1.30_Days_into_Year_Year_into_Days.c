//WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	float years,days;
	//Year into Days
	printf("\n\n\t Enter Year/s Value : ");
	scanf("%f",&years);
	days=years*365;
	printf("\n\n\t Days : %.f",days);
	
	//Days into Year
	printf("\n\n\t Enter Day/s Value : ");
	scanf("%f",&days);
	years=days/365;
	printf("\n\n\t Year/s : %.f",years);
}
