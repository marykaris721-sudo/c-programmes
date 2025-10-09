/*
Name:Mary Wanjiru Kariuki
Reg No:CT100/G/25276/24
Description: Password entry
*/
# include <stdio.h>
# include <stdlib.h>

int main(){
	int password=1234;
	int choice=0;
	int tries=0; 
	
	do {
	printf("enter the correct password");
	scanf("%d", &choice);
	tries ++;
	
	if (choice !=password){
		printf("wrong password\n");
	}
	else if(password ==choice){
		printf("access granted\n");
	}
	}
	while ( choice !=password);
	
	printf("correct the password is %d\n", choice);

return 0;
}
