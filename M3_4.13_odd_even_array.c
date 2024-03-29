//WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>
main()
{
	int i, num[5];
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Number : ");
		scanf("%d",&num[i]);
	}
	
	printf("\n\n\t Even Numbers");
	for (i=0;i<5;i++)
	{		
		if (num[i]%2==0)
		{			
			printf("\n\t %d",num[i]);
		}
	}

	printf("\n\n\t Odd Numbers");
	for (i=0;i<5;i++)
	{
		if (num[i]%2!=0)
		{
			printf("\n\t %d",num[i]);
		}
	}
}
