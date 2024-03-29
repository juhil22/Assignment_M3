//Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	float hours,minutes,seconds;
	printf("\n\n\t Enter Minutes Value : ");
	scanf("%f",&minutes);
	seconds=minutes*60;
	printf("\n\n\t Seconds : %.f",seconds);
	hours=minutes/60;
	printf("\n\n\t Hours : %.f",hours);
}
