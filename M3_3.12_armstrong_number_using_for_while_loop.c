//Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
main() 
{
    int num,oriNum,rem,result = 0, n=0,power,i;
    
    printf("\n\n\tEnter an integer: ");
    scanf("%d",&num);
    
    oriNum=num;
    
    while (oriNum != 0) 
	{
        oriNum /= 10;
        n++;
    }
    
    oriNum=num;
    
    while (oriNum != 0) 
	{
        rem = oriNum % 10;
        
         power = 1;
        for (i = 0; i < n; i++) 
		{
            power *= rem;
        }
        
        result += power;
        oriNum /= 10;
    }
    
    if (result == num)
        printf("\n\n\t%d is an Armstrong number.", num);
    else
        printf("\n\n\t%d is not an Armstrong number.", num);
    
}

