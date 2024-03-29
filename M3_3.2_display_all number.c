//WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>
main() 
{
    int numbers[5],i;

    printf("\n\n\tEnter 5 numbers...");
    for (i=0;i<5;i++) 
	{
        printf("\n\n\tEnter number %d :",i+1);
        scanf("%d", &numbers[i]);
    }

    printf("\n\n\tEntered numbers are :");
    for (i=0;i<5;i++) 
	{
        printf("\n\n\t%d",numbers[i]);
    }

}

