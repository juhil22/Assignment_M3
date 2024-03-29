//WAP to find the largest of three numbers.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\tEnter value of A :");
	scanf("%d",&a);
	printf("\n\n\tEnter value of B :");
	scanf("%d",&b);
	printf("\n\n\tEnter value of C :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n\n\tYour largest number is : %d",a);
	}
	else if(b>a && b>c)
	{
		printf("\n\n\tYour largest number is : %d",b);
	}
	else
	{
		printf("\n\n\tYour largest number is : %d",c);
	}
	
}
