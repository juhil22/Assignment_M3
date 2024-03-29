//Monday to Sunday using switch case
#include <stdio.h>
main() 
{
    int day;
    
    printf("\n\n\tEnter a number between 1 to 7: ");
    scanf("%d", &day);

    switch(day) {
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
            printf("\n\n\tInvalid input! Please enter a number between 1 to 7");
    }

}

