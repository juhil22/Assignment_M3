//1 2 3 6 9 18 27 54...
#include <stdio.h>
main() 
{
    int n,i;
    printf("\n\n\tEnter the number of terms : ");
    scanf("%d", &n);

    int current_term = 1;
    printf("%d ", current_term);

    for (i = 1; i < n; i++) 
	{
        if (i % 3 == 0) 
		{
            current_term *= 3; 
        } else 
		{
            current_term *= 2; 
        }
        printf("%d ", current_term);
    }

    printf("\n");

}

