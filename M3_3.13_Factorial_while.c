//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{
	int i,number, fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	i=1;
	
	while (i<=number)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
	

}
