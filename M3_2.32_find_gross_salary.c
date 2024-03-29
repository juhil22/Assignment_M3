#include <stdio.h>
main()
{
	int base_salary,hra,da;
	
	printf("\n\n\t Enter Your basic salary : ");
	scanf("%d",&base_salary);
	
	if (base_salary > 20000)
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}else if (base_salary <= 20000)
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}else
	{
			hra = base_salary * 30 / 100;
			da = base_salary * 95 / 100;
			printf("\n\n\t Your Gross salary Is %d",base_salary+hra+da);
	}
}
