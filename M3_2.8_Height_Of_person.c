//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
main()
{
	float height;
	printf("\n\n\t Enter your Height in Centimeter : ");
	scanf("%f",&height);
	
	if(height<=150)
	{
		printf("\n\n\t You are Short heighted person...");
	}
	else if(height>150 && height<=170)
	{
		printf("\n\n\t You are Average heighted person...");
	}
	else
	{
		printf("\n\n\tYou are Tall Heighted person...");
	}

}

