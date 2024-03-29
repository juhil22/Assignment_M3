//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
main()
{
	float angle1, angle2, angle3;
	
	printf("\n\n\tEnter the first angle : ");
    scanf("%f",&angle1);

    printf("\n\n\tEnter the second angle : ");
    scanf("%f",&angle2);

    printf("\n\n\tEnter the third angle : ");
    scanf("%f",&angle3);
    
     if (angle1+angle2+angle3==180) 
	 {
        printf("\n\n\tThe angles can form a triangle.");
    } 
	else 
	{
        printf("\n\n\tThe angles cannot form a triangle.");
    }
}
