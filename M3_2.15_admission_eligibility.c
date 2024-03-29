/*Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ---- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
main()
{
	int maths,phy,chem,pmt,pmct;//pmt=phy-maths-total pmct=phy-maths-chem-total
	
	printf("\n\n\tEnter your Maths marks : ");
	scanf("%d",&maths);
	
	printf("\n\n\tEnter your Physics marks : ");
	scanf("%d",&phy);
	
	printf("\n\n\tEnter your Chemistry marks : ");
	scanf("%d",&chem);
	
	pmt=maths+phy;
	pmct=maths+phy+chem;
	
	if(pmt>=140 && pmct>=190)
	printf("\n\n\tThe candidate is eligible for admission...");
	else
	printf("\n\n\tThe candidate is not eligible...");

}
