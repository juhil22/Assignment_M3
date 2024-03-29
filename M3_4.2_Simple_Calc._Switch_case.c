//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("\n\n\t For Addition press : 1 ");
	printf("\n\n\t For Subtraction press : 2 ");
	printf("\n\n\t For Multipilcation press : 3 ");
	printf("\n\n\t For Division press : 4 ");
	printf("\n\n\t For Exit press : 5 ");

	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");	
	
	printf("\n\n\t Enter your Choice : ");
	scanf("%d",&choice);
	
	printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	
	switch(choice)
	{
		case 1: printf("\n\n\t Enter number 1 : ");
				scanf("%d",&n1);
				printf("\n\n\t Enter number 2 : ");
				scanf("%d",&n2);
				printf("\n\n\t Your Addition Answer is %d",n1+n2);
				break; 
		case 2: printf("\n\n\t Enter number 1 : ");
				scanf("%d",&n1);
				printf("\n\n\t Enter number 2 : ");
				scanf("%d",&n2);
				printf("\n\n\t Your Subtraction Answer is %d",n1-n2);
				break;
		case 3: printf("\n\n\t Enter number 1 : ");
				scanf("%d",&n1);
				printf("\n\n\t Enter number 2 : ");
				scanf("%d",&n2);
				printf("\n\n\t Your Multipication Answer is %d",n1*n2);
				break;
		case 4: printf("\n\n\t Enter number 1 : ");
				scanf("%d",&n1);
				printf("\n\n\t Enter number 2 : ");
				scanf("%d",&n2);
				printf("\n\n\t Your Divison Answer is %d",n1/n2);
				break;
		case 5: printf("\n\n\t Exiting....");
				break;
		default:
				printf("\n\n\t Invalid choice! Please enter a number between 1 and 5");		
	}
	
}
