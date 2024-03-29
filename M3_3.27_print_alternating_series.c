//1/2 - 2/3 + 3/4 - 4/5 + 5/6 n
#include <stdio.h>
main() 
{
    int n,i;
    printf("\n\n\tEnter the number of terms: ");
    scanf("%d", &n);

    int sign = 1; 
    float sum = 0; 

    for (i = 1; i <= n; i++) {
        sum += sign * (float)i / (i + 1);
        sign *= -1;
    }

    printf("\n\n\tThe sum of the series is: %.2f", sum);

}

