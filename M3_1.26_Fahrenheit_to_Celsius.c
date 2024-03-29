//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
main()
{
	float fahrenheit,celsius;
	printf("\n\n\t Enter Temperature In Fahrenheit : ");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("\n\n\t Your Temperature In Celsius : %.2f",celsius);
}
