//Convert years into days and months
#include<stdio.h>
main()
{
	float years,days,months;
	printf("\n\n\t Enter Year/s Value : ");
	scanf("%f",&years);
	days=years*365;
	printf("\n\n\t Days : %.f",days);
	months=years*12;
	printf("\n\n\t Months : %.f",months);
}
