/*
Name:  Mary Wanjiru
Reg No:CT100/G/25276/24
Description:Loan Qualification
*/
#include <stdio.h>

int main(){
	int age;
	float income;
	printf("enter age:");
	scanf("%d",&age);
   
   printf("Enter annual incomein KSH.:" );
   scanf("%f",&income);
   
   if (age>=21 && income>=21000){
   	
   printf("\ncongratulations you qualify for a loan");
   } else {
printf("unfortunately we are unable to offer you a loan for this time");
   }
	
return 0;
   
}