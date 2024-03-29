//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	float marks;
	printf("\n\n\tEnter Your Marks : ");
	scanf("%f",&marks);
	
	if(marks>=50)
	{
		printf("\n\n\tYou Passed...");
	}
	else
	{
		printf("\n\n\tYou Failed, Better Luck Next Time... ");
	}
}
