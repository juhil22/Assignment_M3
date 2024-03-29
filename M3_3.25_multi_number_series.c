//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
main()
{
	int n,i,sum;
	printf("\n\n\t Enter value of n : ");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
	}
	
	printf("\n\n\t Multipication of all number are : %d",sum);
}
