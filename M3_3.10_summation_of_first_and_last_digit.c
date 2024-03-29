//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include <stdio.h>
main() 
{
    int num, first_digit, last_digit, sum;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    if (num < 0) 
	{
        num = -num; 
    }

    while (num >= 10) 
	{
        num /= 10;
    }
    first_digit = num;

    sum = first_digit + last_digit;

    printf("\n\n\tThe sum of the first and last digits is :%d ", sum);

}

