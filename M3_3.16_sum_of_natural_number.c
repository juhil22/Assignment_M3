//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n,i=1,sum=0;	
	
	printf("\n\n\tEnter Value Of N : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	
	printf("\n\n\tYour sum of natural number : %d",sum);
}
