//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
main()
{
    int num,sum=0,digit;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);

    if (num<0) 
	{
        num=-num; 
    }

    while (num > 0) 
	{
        digit = num % 10; 
        sum += digit; 
        num /= 10;
    }

    printf("\n\n\tThe sum of the digits is: %d", sum);

}

