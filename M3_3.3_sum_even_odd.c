/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include <stdio.h>
main() 
{
    int num, even=0, odd= 0, sumEven = 0, sumOdd = 0,i;

    printf("\n\n\tEnter 10 numbers : ");

    for (i = 0; i < 10; ++i) 
	{
        scanf("%d",&num);

        if (num % 2 == 0) {
            even ++;
            sumEven += num;
        } else {
            odd++;
            sumOdd += num;
        }
    }

    printf("\n\n\tEven numbers : %d", even);
    printf("\n\n\tOdd numbers count: %d", odd);
    printf("\n\n\tSum of even numbers: %d", sumEven);
    printf("\n\n\tSum of odd numbers: %d", sumOdd);

}

