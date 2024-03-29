//WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
main()
{
int c,d;
		printf("\n\n\t Enter Value Of C : ");
	scanf("%d",&c);
	printf("\n\n\t Enter Value Of D : ");
	scanf("%d",&d);
	c=c*d;
	d=c/d;
	c=c/d;
	printf("\n\n\t Now Value Of C is %d And D is %d",c,d);
}





