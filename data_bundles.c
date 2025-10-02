/*
Reg No:CT100/G/25276/24
Description:Data Bundles Purchases
*/
#include<stdio.h>

int main(){
	
int choice ;

printf("Data bundles services Provider");	
printf("\n1.100MB @KES 50" );
printf("\n2.500MB @KES 200");
printf("\n3.1GB @KES 350");
printf("\n4.2GB@ KES 600");
 
 printf("\nEnter data bundles:");
scanf("%d", &choice);

switch (choice) { 
	case 1 :
		printf("\nchoose 100 MB @KES50" );
		break ;

	case 2:
		printf("\nchoose 200MB @KES 200");
		break;
	
	case 3:
		printf("\nchoose 1GB @KES 350");
		break;
	case 4:
		printf("\nchoose 2GB @ KES 600");
	break;

 	default :
	 printf("\nInvalid choice, please choose from 1-4");	
}
	return 0;
} 