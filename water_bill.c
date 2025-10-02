/*Name: Mary wanjiru Kariuki
Reg No: CT100/G/25276/24
Date: 26/9/2025
Description:a programe showing water bill
*/

#include<stdio.h>
int main(){

	float units, bill;

// prompt user to enter units
	printf("enter units:");
	scanf("%f", &units);
	
	if(units >=0 && units<=30){
		bill=units*20;

	printf("\ntotal bill in Ksh %.2f",bill);
	}
		else if (units >=31 && units <=60){
			bill=units*25;
		
		printf("\ntotal bill in ksh %.2f", bill);
		}	
		
		else if (units >=61){
			bill=units*30;
		    printf("total bill ksh %.2f\n", bill);
		}
	return 0;
}
