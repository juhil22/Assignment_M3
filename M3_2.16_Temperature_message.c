/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather Temp 10-20 then Cold weather Temp 20-30 then Normal in Temp Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
main()
{
	float temp;
	
	printf("\n\n\tEnter Temperature in Centigrade : ");
	scanf("%f",&temp);
	
	if (temp<0) 
	{
        printf("\n\n\tFreezing weather...");
    } 
	else if (temp>= 0 && temp<=10)
	{
        printf("\n\n\tVery Cold weather...");
    } 
	else if (temp>10 && temp<=20) 
	{
        printf("\n\n\tCold weather...");
    } 
	else if (temp> 20 && temp<=30) 
	{
        printf("\n\n\tNormal in Temp...");
    } 
	else if (temp>30 && temp<=40) 
	{
        printf("\n\n\tIt's Hot...");
    } 
	else 
	{
        printf("\n\n\tIt's Very Hot...");
	}
}
