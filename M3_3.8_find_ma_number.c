//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>
main() 
{
    int num,max=-1,digit;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);

    if (num<0) 
	{
        num=-num; 
    }

    while (num>0) 
	{
        digit = num % 10; 
        if (digit > max) 
		{
            max = digit;
        }
        num /= 10; 
    }

    if (max != -1) 
	{
        printf("\n\n\tThe maximum digit is: %d", max);
    } else 
	{
        printf("\n\n\tNo digits found");
    }
}

