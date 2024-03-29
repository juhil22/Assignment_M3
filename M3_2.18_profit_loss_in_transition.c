//Write a C program to calculate profit and loss on a transaction
#include<stdio.h>
main()
{
	float costprice, sellingprice, profit, loss;
	
	printf("\n\n\tEnter Cost price : ");
	scanf("%f",&costprice);
	printf("\n\n\tEnter Selling price : ");
	scanf("%f",&sellingprice);
	
	profit=costprice-sellingprice;
	loss=sellingprice-costprice;
	
	if(profit>0)
	{
		printf("\n\n\tProfit of %.2f is done.",profit);
	}
	else if(loss>0)
	{
		printf("\n\n\tLoss of %.2f is done.",loss);
	}
	else
	{
		printf("\n\n\tNo Profit No Loss is done.");
	}
	
}
