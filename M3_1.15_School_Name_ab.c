//Convert school’s name in abbreviated form
#include<stdio.h>
main()
{
	char nam[20];
	printf("\n\n\t School Name : ");
	gets(nam);
	printf("\n\n Abbreviated Name of School : %c%c",nam[0],nam[5]);
}
