//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int num,i,sum;
	
	printf("\n\n\t Enter 10 Number..... ");
	
	sum=0;
	i=1;
	while(i<=10)
	{
		printf("\n\n\t Enter Number %d : ",i);
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
	
	printf("\n\n\t Your sum is %d",sum);
}
