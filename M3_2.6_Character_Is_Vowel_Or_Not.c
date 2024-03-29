#include<stdio.h>
main()
{
	char ch;
	printf("\n\n\t Enter Any Character : ");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a' : printf("\n\n\t 'a' Is Your Vowel : ");
		         break;
		case 'A' : printf("\n\n\t 'A' Is Your Vowel : ");
		         break;  
		case 'e' : printf("\n\n\t 'e' Is Your Vowel : ");
		         break;
		case 'E' : printf("\n\n\t 'E' Is Your Vowel : ");
		         break;
		case 'i' : printf("\n\n\t 'i' Is Your Vowel : ");
		         break;
		case 'I' : printf("\n\n\t 'I' Is Your Vowel : ");
		         break;   
		case 'o' : printf("\n\n\t 'o' Is Your Vowel : ");
		         break;  
		case 'O' : printf("\n\n\t 'O' Is Your Vowel : ");
		         break;
		case 'u' : printf("\n\n\t 'u' Is Your Vowel : ");
		         break;
		case 'U': printf("\n\n\t 'a' Is Your Vowel : ");
		         break;
		default : printf("\n\n\t The Given Character Is Consonant...");
	}
}
