//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
main()
{
	int num,rn; // rn: reversed number 
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	while (num!=0)
	{
		rn=rn*10+num%10;
		num/=10;
	}
	
	printf("\n\n\t Reversed Number : %d",rn);
	
}
