//Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary
#include<stdio.h>
main()
{
	float salary,pr,premium,installment,ir,rs;
	printf("\n\n\t Enter Your Salary : ");
	scanf("%f",&salary);
	printf("\n\n\t Enter Premium Rate : ");
	scanf("%f",&pr);
	premium=(salary*pr)/100;
	printf("\n\n\t Your Insurance Premium : %.2f",premium); 
	printf("\n\n\t Enter Loan Installment Rate : ");
	scanf("%f",&ir);
	installment=salary*ir/100;
	printf("\n\n\t Your Loan Installment : %.2f",installment);
	rs=salary-installment-premium;
	printf("\n\n\t Your Remaining Salary : %.f",rs);
}
