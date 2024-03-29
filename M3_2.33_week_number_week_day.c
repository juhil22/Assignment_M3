//WAP to input the week number and print week day.
#include <stdio.h>
main() 
{
    int weekNumber;

    printf("\n\n\tEnter the week number (1-7): ");
    scanf("%d",&weekNumber);

    
    switch (weekNumber) 
	{
        case 1:
            printf("\n\n\tMonday");
            break;
        case 2:
            printf("\n\n\tTuesday");
            break;
        case 3:
            printf("\n\n\tWednesday");
            break;
        case 4:
            printf("\n\n\tThursday");
            break;
        case 5:
            printf("\n\n\tFriday");
            break;
        case 6:
            printf("\n\n\tSaturday");
            break;
        case 7:
            printf("\n\n\tSunday");
            break;
        default:
            printf("\n\n\tInvalid week number. Please enter a number between 1 and 7.");
    }

}

