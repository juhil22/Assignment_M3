//Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>

main() 
{
    char str[100]; 
    char largestWord[100], smallestWord[100];
    int i, len, smallestLen = 100, largestLen = 0;
    int wordStartIndex = 0;

    printf("\n\n\tEnter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (i = 0; i <= len; i++) 
	{
        if (str[i] == ' ' || str[i] == '\0') 
		{
            int wordLen = i - wordStartIndex;

            if (wordLen < smallestLen && wordLen > 0) 
			{
                smallestLen = wordLen;
                strncpy(smallestWord, str + wordStartIndex, wordLen);
                smallestWord[wordLen] = '\0';
            }

            if (wordLen > largestLen) 
			{
                largestLen = wordLen;
                strncpy(largestWord, str + wordStartIndex, wordLen);
                largestWord[wordLen] = '\0';
            }

            wordStartIndex = i + 1;
        }
    }

    printf("\n\n\tSmallest word: %s", smallestWord);
    printf("\n\n\tLargest word: %s", largestWord);

}

