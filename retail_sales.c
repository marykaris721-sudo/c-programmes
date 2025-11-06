/*
Name:Mary Wanjiru
REG NO: CT100/G/2527/24
Description:3. A small retail shop stores daily sales transactions in a file named sales.txt. Each line
contains the amount of a single transaction. Write a C program that:
i. Reads all transactions from the file.
ii. Calculates and displays the total sales for the day.
iii. Ensures the file is properly closed after reading.
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;
    int n, i;

    file = fopen("sales.txt", "a"); 
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    printf("How many transactions do you want to enter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount); 
    }

    fclose(file); 

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for reading\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("\nTotal sales for the day: %.2f\n", total);

    return 0;
}
