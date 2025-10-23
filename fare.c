/*
Name: Mary Wanjiru Kariuki
Reg NO:CT100/G/25276/24
Description:Calculation of fare using functions
*/

#include <stdio.h>
int calculate_fare(int distance);

int calculate_fare(int distance)
{
int fare;
	fare = distance * 50;
	return fare;
}
int main()
{
int distance;
int total_fare;	
	printf("enter distance:");
	scanf("%d ", &distance);
	
	total_fare = calculate_fare(distance);
	printf("the total fare is: %d Ksh\n", total_fare);
	
	return 0;
}


