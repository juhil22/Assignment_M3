//Calculate person’s insurance premium based on salary
#include<stdio.h>
main()
{
	float premium,salary,pr;//premium rate(pr)
	printf("\n\n\t Enter Your Salary : ");
	scanf("%f",&salary);
	printf("\n\n\t Enter Premium Rate : ");
	scanf("%f",&pr);
	premium=(salary*pr)/100;
	printf("\n\n\t Your Insurance Premium : %.2f",premium);
}
