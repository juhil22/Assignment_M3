#include <stdio.h>
main()
{
	int c_id,unit;
	char name[15];
	float bill,surcharge;
	
	printf("\n\n\t Enter Your Coustomer Id : ");
	scanf("%d",&c_id);
	
	printf("\n\n\t Enter Your Name : ");
	scanf("%s",&name);
	
	printf("\n\n\t Enter unit Consumed By You : ");
	scanf("%d",&unit);
	
//	switch(unit){
//		case 0 ... 350:
//		bill = unit * 1.20;
//		break;
//		
//		case 351 ... 600:
//		bill = unit * 1.50;
//		break;
//		
//		case 601 ... 800:
//		bill = unit * 1.80;
//		break;
//		
//		
//		default:
//			bill = unit * 2.00;
//	}
//	switch (bill){
//		case 0 ... 800 :
//			bill =
//	}
	
	if (unit <= 350){
		bill = unit * 1.20;
	}else if (unit > 350 && unit <= 600 ){
		bill = unit * 1.50;
	}else if (unit > 600 && unit <= 800 ){
		bill = unit * 1.80;
	}else{
		bill = unit * 2.00;
	}
	
	if (bill > 800){
		surcharge = bill * 18 / 100;
	}
	
	printf("\n\n\t Bill = %.2f",bill);	
	printf("\n\n\t Surcharge = %.2f",surcharge);
	printf("\n\n\t Total Bill = %.2f",bill+surcharge);
	
}
