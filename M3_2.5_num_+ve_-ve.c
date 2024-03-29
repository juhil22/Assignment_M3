/*
5. Check Number Is Positive or Negative
*/

#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("\n\n\tEnter The Number 1 : ",num1);
	scanf("%d",num1);
	
	
	printf("\n\n\tEnter The Number 2 : ",num2);
	scanf("%d",num2);
	
	if(num1>0)
	{
		printf("\n\n\tEnterd Number Is Positive : ");
	}
	 else
	{
		printf("\n\n\tEnterd Number Is Negative : ");
	}
}
