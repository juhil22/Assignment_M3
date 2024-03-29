//Perform 2D matrix array
#include <stdio.h>

void matrix(int, int);
void print_m (int,int);

main()
{
	int i, row, col, arr[5],count;
	
	printf("\n\n\t Please Enter Matrix number (maximum 5): ");
	scanf("%d",&count);
	
	printf("\n\n\t Please Enter Row : ");
	scanf("%d",&row);
	
	printf("\n\n\t Please Enter Column : ");
	scanf("%d",&col);
	
	for (i=0;i<count;i++)
	{
		printf("\n\n\t Matrix No [%d]",i+1);
		matrix(col,row);
	}
	
	for (i=0;i<count;i++)
	{
		print_m(col,row);
		printf("\n");
	}
} 

void matrix(int c, int r)
{
	int i, j ,arry[50][50];
		
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("\n\n\t Enter Value [%d][%d] : ",i,j);
			scanf("%d",&arry[i][j]);
		}		
		printf("\n");
	}
		
}

void print_m (int c, int r)
{
	int i, j, arry[50][50];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf(" %d ",arry[i][j]);
		}		
		printf("\n");
	}
}

