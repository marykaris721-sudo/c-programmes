/*
Name: Mary Wanjiru
Reg:CT100/G/25276/25
Descriptio: A university stores student examination results in a binary file named results.dat. Each
record contains a student’s name, registration number, and total marks. Write a C program
that:
i. Defines a structure to hold the student information.
ii. Reads all student records from the binary file.
iii. Displays the name and marks of each student on the screen.
*/
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int reg;
    float marks;
    int n, i;

    file = fopen("c:\\Users\\MARY KARIS\\results.dat", "a"); // open file in append mode (won’t delete old data)

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter registration number: ");
        scanf("%d", &reg);

        printf("Enter marks: ");
        scanf("%f", &marks);

        // show what was entered
        printf("\nYou entered:\n");
        printf("Name: %s\n", name);
        printf("Reg No: %d\n", reg);
        printf("Marks: %.2f\n", marks);

        // save to file
        fprintf(file, "%s\t%d\t%.2f\n", name, reg, marks);
    }

    fclose(file);
    printf("\nResults saved in the file results.dat\n");

    return 0;
} 