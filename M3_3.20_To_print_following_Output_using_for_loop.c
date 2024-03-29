/*WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50*/
#include<stdio.h>

int main() 
{
    int start_num, end_num,n;

    printf("\n\n\t Enter Starting Number : ");
    scanf("%d", &start_num);
    printf("\n\n\t Enter Ending Number : ");
    scanf("%d", &end_num);

    printf("\n\n\t Your Numbers are......\n ");

    for (n = start_num; n <= end_num; n++) 
	{
        printf("%02d ", n);

        if (n % 10 == 0) 
		{
            printf(" \n");
        }
    }

    return 0;
}

