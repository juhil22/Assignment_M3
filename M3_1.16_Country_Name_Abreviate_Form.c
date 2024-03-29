//Convert country’s name in abbreviate form
#include<stdio.h>
main()
{
	char nam[20];
	//United Kingdom
	printf("\n\n\t Country Name : ");
	gets(nam);
	printf("\n\n\t Abbreviated Name of Country : %c%c",nam[0],nam[7]);
}
