//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>

main() 
{
    char e1[10], e2[10], e3[10], e4[10], e5[10];
    float s1, s2, s3, s4, s5;
    float ts, as;

    printf("\n\n\tEnter 1st Employee Name : ");
    scanf("%9s", e1);
    printf("\n\n\tEnter 1st Employee Salary : ");
    scanf("%f", &s1);

    printf("\n\n\tEnter 2nd Employee Name : ");
    scanf("%9s", e2);
    printf("\n\n\tEnter 2nd Employee Salary : ");
    scanf("%f", &s2);

    printf("\n\n\tEnter 3rd Employee Name : ");
    scanf("%9s", e3);
    printf("\n\n\tEnter 3rd Employee Salary : ");
    scanf("%f", &s3);

    printf("\n\n\tEnter 4th Employee Name : ");
    scanf("%9s", e4);
    printf("\n\n\tEnter 4th Employee Salary : ");
    scanf("%f", &s4);

    printf("\n\n\tEnter 5th Employee Name : ");
    scanf("%9s", e5);
    printf("\n\n\tEnter 5th Employee Salary : ");
    scanf("%f", &s5);

    ts = s1 + s2 + s3 + s4 + s5;
    printf("\n\n\tTotal Salary : %.2f", ts);

    as = ts / 5;
    printf("\n\n\tAverage Salary : %.2f", as);

}

