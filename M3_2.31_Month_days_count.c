//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>
main() 
{
    int monthNumber;


    printf("\n\n\tEnter the month number (1-12): ");
    scanf("%d", &monthNumber);

    
    switch (monthNumber) {
        case 2: // February
            printf("\n\n\tNumber of days in February: 28 or 29 (leap year)");
            break;

        case 4:
        case 6:
        case 9:
        case 11: // April, June, September, November
            printf("\n\n\tNumber of days in the selected month: 30");
            break;

        default: // January, March, May, July, August, October, December
            printf("\n\n\tNumber of days in the selected month: 31");
            break;
    }

}

