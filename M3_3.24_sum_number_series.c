//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
main()
{
	int n,i,sum;
	printf("\n\n\t Enter value of n : ");
	scanf("%d",&n);
	
	sum=0;
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("\n\n\t Sum of all number are : %d",sum);
	
}
