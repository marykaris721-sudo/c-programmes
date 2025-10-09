/*
Name:Mary Wanjiru Kariuki
Reg: CT100/G/25276/24
Description:programm to ilustrate while loop for withdrawal of money from a bankgg
*/

#include <stdio.h>

int main (){

	int amount;
	int  balance=10000;
	
	printf("your balance is %d \n", balance);
	
	while (balance>0){
	
		printf("enter amount to be withdrawn");
	scanf("%d",&amount);
	balance=balance-amount;
printf("your new balance  %d\n",balance);
	}
	
	
	printf("insufficient balace");
	
	
	return 0;
	
}
