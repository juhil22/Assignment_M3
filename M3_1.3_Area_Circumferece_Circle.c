//WAP to Find Area And Circumference of Circle
#include<stdio.h>
#include<conio.h>
main()
{
	//Circumference of Circle
	float circumference,r,p,area;
	p=3.14;//pi
	r=5;//Radius
	circumference=2*p*r;
	printf(" Circumference of Circle = %.2f",circumference);
	
	//Area Of Circle
	area=p*r*r;
	printf("\n\n Area O Circle = %.1f",area);
}
