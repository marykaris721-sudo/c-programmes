/*
Name: Mary Wanjiru
Reg No: CT100/G/25276/24
Descrption:
 A local library wants to keep track of the titles of books borrowed each day. Write a C
program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books.txt.
i. The program should not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char book_title[100];

    fptr = fopen("C:\\Users\\MARY KARIS\\OneDrive\\borrowed_books.txt", "a"); // open for adding
    if (fptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter book title: ");
    gets(book_title); 

    fprintf(fptr, "%s\n", book_title);
    printf("Book title saved in borrowed_books.txt.\n");

    fclose(fptr);
    return 0;
}