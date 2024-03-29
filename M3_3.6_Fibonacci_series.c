//WAP to print Fibonacci series up to given numbers.
#include<stdio.h>
main()
{
	int a=0, b=1, count, c=0, i;
	printf("\n\n\t Your fibonacci series count : ");
	scanf("%d",&count);
	
	printf("\n\n\tYour fibonacci series : %d",c);
	
	c=a+b;
	printf("\n\n\tYour fibonacci series : %d",c);

	while(i < count-2)
	{
		
		printf("\n\n\tYour fibonacci series : %d",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
	
}
