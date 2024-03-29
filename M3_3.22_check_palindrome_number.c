//Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
main()
{
	int num, originalNum, reversedNum, remainder,count=0;
	
	while(count<3)
	{
		printf("\n\n\t Enter number : ");
		scanf("%d",&num);
		
		originalNum=num;
		reversedNum=0;
		
		while(num!=0)
		{
			remainder=num%10;
			reversedNum=reversedNum*10+remainder;
			num/=10;
		}
		
		if(originalNum == reversedNum)
		{
			printf("\n\n\t %d is a palindrome ",originalNum);
		}
		else 
		{
			printf("\n\n\t %d is a not palindrome ",originalNum);
		}
		
		count++;
	}
	
}
