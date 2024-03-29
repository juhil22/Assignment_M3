//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int num,i;
	
	printf("\n\n\tEnter value for table :  ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t%d x %d = %d", num, i, num*i);
	}
}
