/*
Name: Mary Wnajiru Kariuki
Reg No:CT100/G/25276/24
Description:The hotel records its total revenue for each day of the week (7 days).
1. Use a 1D array revenue[7] to store the daily revenues.
2. Input the revenue for each day.
3. Calculate and display:
 The total weekly revenue.
The average daily revenue
*/
#include <stdio.h>
int main()
{
	
int revenue[7]={500,1000,1500,2000,2500,3000,3500};
int total_revenue=0;
float avarage_revenue;

//input revenue of each day
int i;
for(i=0;i<7;i++){
	total_revenue=total_revenue+revenue[i];
}
printf("Total weekly revenue %d\n",total_revenue);

avarage_revenue=total_revenue/7;
printf("Avarage daily revenue %.2f",avarage_revenue);

return 0;
}
