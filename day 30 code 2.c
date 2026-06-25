#include <stdio.h>

int main() {
    int bookID[100], n, i;
    char bookName[100][50], author[100][50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookID[i]);

        printf("Book Name: ");
        scanf("%s", bookName[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    // Display library records
    printf("\n----- Mini Library Records -----\n");
    printf("Book ID\tBook Name\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\n", bookID[i], bookName[i], author[i]);
    }

    return 0;
}