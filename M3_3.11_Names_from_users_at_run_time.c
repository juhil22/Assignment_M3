//Accept 5 names from user at run time
#include<stdio.h>
main() 
{
    char names[5][50]; 
    int i;
    
    for (i=0;i<5;i++) 
	{
        printf("\n\n\t Enter name %d : ",i + 1);
        scanf("%s", names[i]);
    }

    
    printf("\n\n\t The names you entered are : ");
    for (i=0;i<5;i++) 
	{
        printf("\n\n\t%d.%s", i + 1, names[i]);
    }

}

