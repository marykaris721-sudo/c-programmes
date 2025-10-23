/*
Name:Mary Wanjiru 
Reg:CT100/G/25276/24
Description : c function to calculate electric bill
*/
#include <stdio.h>
double calculateElectricBill(int units) {
    double bill = 0.0;

    if (units <= 0) {
        return 0.0;
    }
    if (units <= 100) {
        bill = units * 10;
    }
    
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    }
    
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    double total;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    total = calculateElectricBill(units);

    printf("Total electricity bill = KSh. %.2f\n", total);

    return 0;
}