/*Name: Mary wanjiru Kariuki
Reg No: CT100/G/25276/24
Date: 26/9/2025
Description: Final exam eligability
*/
#include<stdio.h>
int main(){
	
float attendance, avarage_marks;

//prompt user to enter attendance 
printf("Enter your attendance:");
scanf("%f",&attendance);

// prompt user to enter avarage marks
printf("Enter your avarage marks:");
scanf("%f", &avarage_marks);

if(attendance>= 0.75 && avarage_marks>= 40){
printf("you are eligble for the exam.");
}	
 else{
	printf("you are not eligible for the exam.");
}
	return 0;
}