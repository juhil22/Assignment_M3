//Write a program in C to combine two strings manually
#include <stdio.h>
main() 
{
    char firstString[50];
    char secondString[50];
    char combinedString[100];
    int i = 0, j = 0;

    printf("\n\n\tEnter the first string: ");
    scanf("%s", firstString);

    printf("\n\n\tEnter the second string: ");
    scanf("%s", secondString);

    while (firstString[i] != '\0')
    {
        combinedString[i] = firstString[i];
        i++;
    }
    while (secondString[j] != '\0') 
	{
        combinedString[i + j] = secondString[j];
        j++;
    }
    combinedString[i + j] = '\0';

    printf("\n\n\tCombined string: %s", combinedString);

}

