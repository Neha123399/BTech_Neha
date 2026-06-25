#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    // Display book records
    printf("\n----- Library Records -----\n");
    printf("ID\tTitle\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%s\n",
               book[i].id,
               book[i].title,
               book[i].author);
    }

    return 0;
}