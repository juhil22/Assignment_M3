//WAP to find number is even or odd using ternary operator using c language
#include <stdio.h>
main() 
{
    int number;

    printf("\n\n\tEnter a number: ");
    scanf("%d", &number);
    
    (number%2==0) ? printf("\n\n\tThe entered number is even") : printf("\n\n\tThe entered number is odd");

}

