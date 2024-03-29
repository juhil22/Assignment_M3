//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
main()
{
	int odd=0,even=0,n=1,num;
	 
	printf("\n\n\t Enter 5 number...");
	
	while(n<=5)
	{

		printf("\n\n\t Enter number %d : ",n);
		scanf("%d",&num);
		
	if(num%2==0)
		even+=num;

	else
		odd+=num;
		n++;
		
	}
	printf("\n\n\t Sum of Even Number : %d",even);
	printf("\n\n\t Sum of Odd Number : %d",odd);

	
}
