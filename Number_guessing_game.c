/*
Name: Mary Wanjiru
Reg no.: CT100/G/25276/24
Description: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int guess = 0;
int tries = 0;
int maximum = 20;
int minimum = 1;
int answer = (rand() % (maximum - minimum +1)) + minimum;

printf("*NUMBER GUESSING GAME*\n");

do {
	printf("guess a number between %d - %d:",maximum, minimum);
	scanf("%d", & guess);
	tries ++; 
	
	if (guess > answer){
		printf("\nToo high!");
	}
	else if (guess > answer){
		printf("Too low!");
	}
	else{
	printf("\nCongratulation!");	
	}
} while(guess != answer);

printf("\nThe answer is %d", answer);
printf("it took you %d", tries);

	return 0;
}
