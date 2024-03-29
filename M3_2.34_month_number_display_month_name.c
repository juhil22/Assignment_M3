//Accept month number and display month name
#include<stdio.h>
main() 
{
    int monthNumber;

    printf("\n\n\tEnter the month number (1-12) : ");
    scanf("%d",&monthNumber);

    switch(monthNumber) 
	{
        case 1:
            printf("\n\n\tJanuary");
            break;
        case 2:
            printf("\n\n\tFebruary");
            break;
        case 3:
            printf("\n\n\tMarch");
            break;
        case 4:
            printf("\n\n\tApril");
            break;
        case 5:
            printf("\n\n\tMay");
            break;
        case 6:
            printf("\n\n\tJune");
            break;
        case 7:
            printf("\n\n\tJuly");
            break;
        case 8:
            printf("\n\n\tAugust");
            break;
        case 9:
            printf("\n\n\tSeptember");
            break;
        case 10:
            printf("\n\n\tOctober");
            break;
        case 11:
            printf("\n\n\tNovember");
            break;
        case 12:
            printf("\n\n\tDecember");
            break;
        
		default:
            printf("\n\n\tInvalid month number. Please enter a number between 1 and 12.\n");
    }

}

