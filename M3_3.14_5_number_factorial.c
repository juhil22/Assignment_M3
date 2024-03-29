//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
main()
{
	int i,number, fact, n;
	
	for(n=0;n<=4;n++)
	{
		printf("\n\n\tEnter Number %d : ",n+1);
		scanf("%d",&number);
		
		fact=1;
		
		for(i=1;i<=number;i++)
	{
		fact=fact*i;
		
	}
		printf("\n\n\t%d",fact);
	}	

}
