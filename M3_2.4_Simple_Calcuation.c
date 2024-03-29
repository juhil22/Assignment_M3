//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t Enter Value Of A :  ");
	scanf("%d",&a);
	printf("\n\n\t Enter Value Of B :  ");
	scanf("%d",&b);
	printf(".........................................................");
	printf("\n\tFor Addition Press 1 \n\n\tFor Subtraction Press 2 \n\n\tFor Multi. Press 3 \n\n\tFor Division Press 4 \n\n\tFor Modulo Press 5 \n\n\tPress 6 For Exit");
	printf("\ns.........................................................");
	printf("\n\n\tEnter Your Choice : ");
	scanf("%d",&c);
	
		if(c==1)
		printf("\n\n\tYour Result : %d",a+b);
	
	
		else if(c==2)
		printf("\n\n\tYour Result : %d",a-b);
	
	
		else if(c==3)
		printf("\n\n\tYour Result : %d",a*b);
	
	
		else if(c==4)
		printf("\n\n\tYour Result : %d",a/b);
	

		else if(c==5)
		printf("\n\n\tYour Result : %d",a%b);
		
		else if(c==6)
		exit(0);
	
	else 
	printf("\n\n\tPlease Enter Valid Choice...");
}
