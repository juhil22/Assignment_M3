//WAP to check whether a number is negative, positive or zero
#include <stdio.h>
main()
{
    int number;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &number);

    if (number<0) 
	{
        printf("\n\n\tThe entered number is negative");
    } else if (number>0) 
	{
        printf("\n\n\tThe entered number is positive");
    } else 
	{
        printf("\n\n\tThe entered number is zero");
    }

}

