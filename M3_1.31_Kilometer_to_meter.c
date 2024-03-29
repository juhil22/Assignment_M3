//Convert kilometers into meters
#include<stdio.h>
main()
{
	float km, m;
	printf("\n\n\t Enter Distance In Kilometer : ");
	scanf("%f",&km);
	m = km * 1000;
	printf("\n\n\t Distance In Meter : %.2f",m);
}
