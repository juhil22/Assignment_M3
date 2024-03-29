//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
main()

{
	int a,b,t;
	//swap 2 numbers with using 3rd variable
	printf("\n\n\t Enter Value Of A : ");
	scanf("%d",&a);
	printf("\n\n\t Enter Value Of B : ");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("\n\n\t Now Value Of A is %d And B is %d",a,b);
	
	int c,d;
	//swap 2 numbers without using 3rd variable
		printf("\n\n\t Enter Value Of C : ");
	scanf("%d",&c);
	printf("\n\n\t Enter Value Of D : ");
	scanf("%d",&d);
	c=c+d;//c=100+200=300
	d=c-d;//d=300-200=100
	c=c-d;
	printf("\n\n\t Now Value Of C is %d And D is %d",c,d);
	
}
