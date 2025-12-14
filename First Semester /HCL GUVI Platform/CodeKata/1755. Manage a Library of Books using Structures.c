#include <stdio.h>
#include <stdlib.h>

// Structure to store book details
struct Book {
    char title[101];     // Title of the book
    char author[101];    // Author of the book
    int year;            // Year of publication
};

int main() {

    int n;               // Number of books
    int i;

    // Read number of books
    scanf("%d", &n);

    // Dynamically allocate memory for n books
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));

    // Read details of each book
    for (i = 0; i < n; i++) {
        scanf("%s %s %d",
              books[i].title,
              books[i].author,
              &books[i].year);
    }

    // Print details of all books in required format
    for (i = 0; i < n; i++) {
        printf("Title: %s, Author: %s, Year: %d\n",
               books[i].title,
               books[i].author,
               books[i].year);
    }

    // Free dynamically allocated memory
    free(books);

    return 0;   // End of program
}
