//C Program to Reverse a Number Using FOR Loop Series Program :
#include<stdio.h>
main()
{
	int num,rn; // rn: reversed number 
	
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for (;num!=0;num/=10)
	{
		rn=rn*10+num%10;
	}
	
	printf("\n\n\t Reversed Number : %d",rn);
	
}
