//WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("\n\n\tEnter value of A :");
	scanf("%d",&a);
	printf("\n\n\tEnter value of B :");
	scanf("%d",&b);
	printf("\n\n\tEnter value of C :");
	scanf("%d",&c);
	
	max=(a>b) ? ((a>c) ? a:b) : ((b>c)?b:c);
	
	printf("\n\n\tYour maximum number is : %d",max);

}
