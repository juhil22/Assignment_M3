//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n\tEnter Value Of A : ");
	scanf("%d",&a);
	printf("\n\n\tEnter Value Of B : ");
	scanf("%d",&b);
	
	if(a==b)
	printf("\n\n\tBoth A and B Are Equal");
	
	else
	printf("\n\n\tA and B Are Not Equal...");
}
