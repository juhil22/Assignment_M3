/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include <stdio.h>
main() 
{
    float unitCharges, totalBill;
    
    printf("\n\n\tEnter the electricity unit charges: ");
    scanf("%f", &unitCharges);
    
    if (unitCharges<=50) 
	{
        totalBill = unitCharges * 0.50;
    } else if (unitCharges<=150) 
	{
        totalBill = 50*0.50+(unitCharges-50)*0.75;
    } else if (unitCharges <= 250) 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    } else 
	{
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }

    totalBill += totalBill*0.20;

    printf("\n\n\tTotal Electricity Bill: Rs. %.2f", totalBill);

}

