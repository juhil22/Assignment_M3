//Vowel or Consonant using switch case
#include <stdio.h>
main() 
{
    char ch;
    
    printf("\n\n\tEnter a character: ");
    scanf(" %c",&ch);

    switch(ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n\n\t%c is a Vowel", ch);
            break;
        default:
            printf("\n\n\t%c is a Consonant", ch);
    }

}

